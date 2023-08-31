/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elasserr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:22:49 by elasserr          #+#    #+#             */
/*   Updated: 2023/08/21 12:19:22 by elasserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	k;

	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	k = nb * ft_recursive_factorial(nb - 1);
	return (k);
}
