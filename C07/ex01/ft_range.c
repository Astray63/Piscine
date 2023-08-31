/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elasserr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:50:14 by elasserr          #+#    #+#             */
/*   Updated: 2023/08/31 14:37:20 by elasserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(*tab) * (max - min));
	if (min >= max || tab == NULL)
		return (0);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>
int     main()
{
        int max = 42;
        int min = 0;
        int     *tab = ft_range(min, max);
        int     i;

        for(i = 0; i < max - min; i++)
        {
                printf("%d", tab[i]);
        }
}
*/
