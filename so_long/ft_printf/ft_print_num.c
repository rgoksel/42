/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:20:45 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/21 12:28:15 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_num(long long int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		len += ft_print_char('-');
		nbr *= -1;
	}
	if (nbr > 9)
		len += ft_print_num(nbr / 10);
	len += write(1, &LOWER[nbr % 10], 1);
	return (len);
}
