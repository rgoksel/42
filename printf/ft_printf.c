/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:57:53 by fatturan          #+#    #+#             */
/*   Updated: 2023/07/21 12:28:08 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_and_print(char c, va_list arg)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_print_char(va_arg(arg, int));
	if (c == 's')
		count += ft_print_str(va_arg(arg, char *));
	if (c == 'd' || c == 'i')
		count += ft_print_num(va_arg(arg, int));
	if (c == 'x')
		count += ft_print_hex(va_arg(arg, long long int ), 16, 1);
	if (c == 'X')
		count += ft_print_hex(va_arg(arg, long long int ), 16, 0);
	if (c == 'u')
		count += ft_print_hex(va_arg(arg, unsigned long int ), 10, 1);
	if (c == 'p')
		count += ft_print_pointer(va_arg(arg, unsigned long int));
	if (c == '%')
		count += ft_print_char('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		len;

	if (!format)
		return (0);
	len = 0;
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
		{
			len += len_and_print(*(format + 1), arg);
			format += 2;
		}
		else
		{
			len += ft_print_char(*format);
			format++;
		}
	}
	va_end(arg);
	return (len);
}
