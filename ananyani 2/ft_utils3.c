/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:58:57 by rdemiray          #+#    #+#             */
/*   Updated: 2023/08/27 12:01:54 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (s[c] != 0)
		c++;
	return (c);
}

static void	ft_check_str(char *str)
{
	size_t	i;

	i = 0;
	if (!ft_isdigit(str[i]) && str[i] != '+' && str[i] != '-')
		ft_error();
	if ((str[i] == '+' || str[i] == '-') && !ft_isdigit(str[i + 1]))
		ft_error();
	i = 1;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			ft_error();
		}
		i++;
	}
}

int	ft_atoi(char *str)
{
	long	i;
	long	sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	ft_check_str(str);
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i++] - '0');
		if (result > 2147483648)
			ft_error();
	}
	if ((result * sign) == 2147483648)
		ft_error();
	return ((int)result * sign);
}
