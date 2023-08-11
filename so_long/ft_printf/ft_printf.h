/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:41:12 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/21 12:23:19 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define UPPER "0123456789ABCDEF"
# define LOWER "0123456789abcdef"

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>

int			ft_print_char(int c);
int			ft_print_str(char *s);
int			ft_print_hex(unsigned int nbr, unsigned int base, int b);
int			ft_print_pointer(unsigned long p);
int			ft_print_num(long long int nbr);
int			ft_printf(const char *format, ...);

#endif