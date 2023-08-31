/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elasserr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:01:33 by elasserr          #+#    #+#             */
/*   Updated: 2023/08/29 22:50:40 by elasserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	lnb;
	char	temp;

	lnb = nb;
	if (lnb < 0)
	{
		lnb = lnb * -1;
		write(1, "-", 1);
	}
	if (lnb > 9)
	{
		ft_putnbr(lnb / 10);
	}
	temp = '0' + lnb % 10;
	write(1, &temp, 1);
}
