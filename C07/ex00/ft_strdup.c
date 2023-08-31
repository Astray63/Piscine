/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elasserr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:17:33 by elasserr          #+#    #+#             */
/*   Updated: 2023/08/31 14:34:43 by elasserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dup;

	i = 0;
	dup = NULL;
	while (src[i])
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (0);
	j = 0;
	while (j <= i)
	{
		dup[j] = src[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
/*
int   main()
{
        char *src = "HELLO";
        printf("%s", ft_strdup(src));
}
*/
