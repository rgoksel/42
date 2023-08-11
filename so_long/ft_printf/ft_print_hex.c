/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:01:14 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/21 12:28:17 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nbr, unsigned int base, int b)
{
	size_t	len;

	len = 0;
	if (nbr >= base)
	{
		len += ft_print_hex(nbr / base, base, b);
	}
	if (b == 1)
		len += write(1, &LOWER[nbr % base], 1);
	else
		len += write(1, &UPPER[nbr % base], 1);
	return (len);
}
