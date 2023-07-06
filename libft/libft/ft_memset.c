/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:55:26 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/06 12:25:51 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* str - a pointer to the block of memory to fill
 chr - this is the vlaue to be set 
 num - number of bytes to be set to the value */

#include <stdio.h>

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


int main()
{
    char str[] = "Hello, World!";
    int chr = '*';
    size_t num = 7;

    printf("Before ft_memset: %s\n", str);
    ft_memset(str, chr, num);
    printf("After ft_memset: %s\n", str);

    return 0;
}




