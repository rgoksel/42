/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:11:04 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/06 20:27:26 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned char	*a;
	unsigned char	*b;

    i = 0;
    a = (unsigned char *)str1;
    b = (unsigned char *)str2;
	while (i < n && a[i] == b[i] && a[i] && b[i])
	{
		if (a[i] != b[i])
			return ((unsigned char)a[i] - (unsigned char)b[i]);
		i++;
	}
	return (a[i] - b[i]);
}

int main(void){
	char a[] = "a";
	char b[] = "b";
	
	printf("ft_memcpm :%d\n", ft_memcmp(a, NULL, ft_strlen(a)));
	printf("memcpm :%d\n", memcmp(a, NULL, ft_strlen(a)));
	return 0;
}