/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elasserr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:34:17 by elasserr          #+#    #+#             */
/*   Updated: 2023/08/15 16:15:48 by elasserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	size_dest(char *desti)
{
	int	i;

	i = 0;
	while (desti[i])
	{
		i++;
	}
	return (i);
}

int	size_src(char *srci)
{
	int	i;

	i = 0;
	while (srci[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	a;
	int	b;
	int	space_left;
	int	i;

	i = 0;
	a = size_dest(dest);
	b = size_src(src);
	space_left = size - a;
	while (i < space_left - 1 && src[i] != '\0')
	{
		dest[a + i] = src[i];
	}
	if (space_left > 0) 
		dest[a + i] = '\0';
	return (a + b);
}
