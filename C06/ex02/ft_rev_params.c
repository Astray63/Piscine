/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elasserr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:04:11 by elasserr          #+#    #+#             */
/*   Updated: 2023/08/16 22:26:04 by elasserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	cur;

	if (argc < 2)
		return (0);
	cur = argc - 1;
	while (cur >= 1)
	{
		write(1, argv[cur], ft_strlen(argv[cur]));
		write(1, "\n", 1);
		cur--;
	}
}
