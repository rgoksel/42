/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:50:01 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/07 12:45:18 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_p;

	str_p = (unsigned char *)str;
	i = 0;
	while (i < n && *str_p)
	{
		if (*str_p == (unsigned char)c)
			return ((void *)(str + i));
		str++;
	}
	return (NULL);
}
