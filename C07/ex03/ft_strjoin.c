/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elasserr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 22:27:08 by elasserr          #+#    #+#             */
/*   Updated: 2023/08/30 12:02:15 by elasserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	char	*end_dest;

	end_dest = dest + ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		end_dest[i] = src[i];
		i++;
	}
	end_dest[i] = '\0';
	return (dest);
}

int	ft_lenght(char **strs, int size, char *sep)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = 0;
	while (i < size)
	{
		lenght = lenght + ft_strlen(strs[i]);
		i++;
	}
	lenght = lenght + ft_strlen(sep) * (size - 1) + 1;
	return (lenght);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		lenght;
	char	*str;

	lenght = ft_lenght(strs, size, sep);
	str = malloc(sizeof(char) * lenght);
	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	if (str == NULL)
		return (NULL);
	i = -1;
	str[0] = '\0';
	while (++i < size)
	{
		ft_strcat(str, strs[i]);
		if (!(i == size - 1))
			ft_strcat(str, sep);
	}
	return (str);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char *res = ft_strjoin(argc, argv, "-_-");
	printf("%s", res);
	free(res);
}
*/
