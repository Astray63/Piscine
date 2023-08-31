/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elasserr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:46:07 by elasserr          #+#    #+#             */
/*   Updated: 2023/08/22 12:08:44 by elasserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	bubble_sort(char **arr, int size)
{
	int	sorted;
	int	i;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 0;
		while (i < size - 1)
		{
			if (ft_strcmp(arr[i], arr[i + 1]) > 0)
			{
				ft_swap(&arr[i], &arr[i + 1]);
				sorted = 0;
			}
			i++;
		}
		size--;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc <= 1)
	{
		return (1);
	}
	bubble_sort(argv + 1, argc - 1);
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
