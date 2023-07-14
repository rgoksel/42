/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:55:26 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/14 09:49:03 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int chr, size_t num)
{
	unsigned char	*pbstr;

	pbstr = str;
	while (num > 0)
	{
		*pbstr ++ = (unsigned char) chr;
		num--;
	}
	return (str);
}
