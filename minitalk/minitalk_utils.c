/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 21:52:00 by rdemiray          #+#    #+#             */
/*   Updated: 2023/08/04 23:09:58 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(char *str)
{
	int		i;
	int		isaret;
	long	son;

	i = 0;
	isaret = 1;
	son = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str [i] == '+')
	{
		if (str[i] == '-')
			isaret *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		son *= 10;
		son += str[i] - '0';
		i++;
	}
	son *= isaret;
	return (son);
}


void	my_putnbr(int nbr)
{
	char	str[16];
	int	i;

	i = 0;
	while (nbr)
	{
		str[i] = nbr % 10 + 48;
		nbr = nbr / 10;
		i++;
	}
	while (i--)
		write(1, &str[i], 1);
}