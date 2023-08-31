/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elasserr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:58:59 by elasserr          #+#    #+#             */
/*   Updated: 2023/08/15 19:21:36 by elasserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		digit;
	long	lnb;

	lnb = nb;
	if (lnb < 0)
	{
		lnb *= -1;
		write(1, "-", 1);
	}
	if (lnb > 9)
		ft_putnbr(lnb / 10);
	digit = '0' + lnb % 10;
	write(1, &digit, 1);
}
