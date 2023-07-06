/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:06:32 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/06 21:07:33 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
