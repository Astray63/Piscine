/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elasserr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:39:56 by elasserr          #+#    #+#             */
/*   Updated: 2023/08/17 14:16:00 by elasserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	is_whitespace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	get_digit(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	base_len;
	int	digit;

	sign = -1;
	result = 0;
	base_len = ft_strlen(base);
	while (is_whitespace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		digit = get_digit(*str, base);
		if (digit == -1)
			break ;
		result = result * base_len + digit;
		str++;
	}
	return (result * sign);
}
