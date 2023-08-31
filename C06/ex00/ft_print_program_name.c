/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elasserr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:41:30 by elasserr          #+#    #+#             */
/*   Updated: 2023/08/21 12:30:19 by elasserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*program_name;
	int		i;

	if (argc > 0)
	{
		program_name = argv[0];
		i = 0;
		while (program_name[i] != '\0')
			i++;
		write(1, program_name, i);
	}
}
