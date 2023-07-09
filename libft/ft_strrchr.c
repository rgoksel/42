/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:00:31 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/07 13:14:40 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strrchr() function finds the last occurrence of a character in a string. The character c can be the null character (\0); 
//the ending null character of string is included in the search.

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen((char *)str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
