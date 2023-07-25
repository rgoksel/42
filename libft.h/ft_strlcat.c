/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:04:47 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/14 09:49:23 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dst;
	unsigned int	sr;

	i = 0;
	dst = ft_strlen(dest);
	sr = ft_strlen(src);
	if (size == 0 || size <= dst)
		return (sr + size);
	while (src[i] != '\0' && dst + i < size - 1)
	{
		dest[dst + i] = src[i];
		i++;
	}
	dest[dst + i] = '\0';
	return (dst + sr);
}
