/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:56:06 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/21 12:28:12 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_pointer(unsigned long p)
{
	int	len;

	len = 0;
	if (p >= 16)
		len += ft_pointer(p / 16);
	len += write(1, &LOWER[p % 16], 1);
	return (len);
}

int	ft_print_pointer(unsigned long p)
{
	int	len;

	len = 0;
	len += ft_print_char('0');
	len += ft_print_char('x');
	len += ft_pointer(p);
	return (len);
}
