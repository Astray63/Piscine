/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elasserr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:10:55 by elasserr          #+#    #+#             */
/*   Updated: 2023/08/29 22:49:35 by elasserr         ###   ########.fr       */
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

void	print_comb(int x, int y)
{
	if (x <= 9)
		write(1, "0", 1);
	ft_putnbr(x);
	write(1, " ", 1);
	if (y <= 9)
		write(1, "0", 1);
	ft_putnbr(y);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_comb(a, b);
			if (a != 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
/*
int main()
{
	ft_print_comb2();
}
*/
