/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:14:11 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/09 16:31:26 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t		i;
	char		*a;

	a = (char *) malloc(count * size);
	if (!a)
		return (NULL);
	i = 0;
	while (i <= count * size)
	{
		a[i] = NULL;
		i++;
	}
	return (a);
}
