/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:07:46 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/08 13:55:35 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strchr() function finds the first occurrence of a character in a string. 
//The character c can be the null character (\0); 
//the ending null character of string is included in the search.

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)(str + i));
	return (NULL);
}
