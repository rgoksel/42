/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:58:54 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/06 20:59:20 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
  // dest: Src parametresindeki verilerin kopyalanacağı belleği gösteren işaretçi
  //src: Dest parametresine kopyalanacak karakterlerin bellek başlangıcını gösteren bir işaretçi.
    //n:  maksimum Kopyalanacak karakter sayısı
    //Src parametresi ile gösterilen bellek bölgesindeki karakterleri, 
    //n parametre değeri kadar uzunlukta, dest parametresindeki bellek bölgesine kopyalar.
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_p;
	unsigned char	*src_p;
	size_t			i;

	i = 0;
	dest_p = (unsigned char *)dest;
	// hedef şaretçiyi void* türünden bir unsigned char* tipine dönüştürdük
	src_p = (unsigned char *)src;
	if (!dest_p && !src_p)
		return (NULL);
	while (i < n)
	{
		dest_p[i] = src_p[i];
		//n byte kopyaladık
		i++;
	}
	return (dest);
}
