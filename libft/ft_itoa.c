/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:08:49 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/09 18:44:33 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

long int	ft_ifngtv(long int nbr)
{
	if (nbr < 0)
		nbr *= -1;
	return (nbr);
}

int	ft_len(long int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len = 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*c;

	sign = 1;
	if (n < 0)
		sign = -1;
	len = ft_len(n);
	c = (char *)malloc(sizeof(char) * len + 1);
	if (c == NULL)
		return (0);
	c[len] = '\0';
	len = len - 1;
	while (len >= 0)
	{
		c[len] = '0' + ft_ifngtv(n % 10);
		n = ft_ifngtv(n / 10);
		len--;
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
}
