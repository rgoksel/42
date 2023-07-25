/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:35:07 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/21 12:28:19 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_str(char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (ft_print_str("(null)"));
	while (*s != '\0')
	{
		ft_print_char(*s++);
		len++;
	}
	return (len);
}
