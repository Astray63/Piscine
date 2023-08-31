/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elasserr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:51:50 by elasserr          #+#    #+#             */
/*   Updated: 2023/08/19 19:03:54 by elasserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nbr;

	i = 1;
	nbr = nb;
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		nb = nb * nbr;
		i++;
	}
	return (nb);
}
