/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:07:46 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/06 21:10:13 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strchr() function finds the first occurrence of a character in a string. The character c can be the null character (\0); 
//the ending null character of string is included in the search.

#include "libft.h"


char	*ft_strchr(const char *str, int c)
{
    while (*str != '0')
    {
        if (str == c)
            return ((char*) str);
		str++;
    } 
    if (c = '/0')
		return ((char*)str);
		return (0);
}



