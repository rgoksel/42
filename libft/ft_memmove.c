/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:59:32 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/06 21:02:30 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

  // dest: Src parametresindeki verilerin kopyalanacağı belleği gösteren işaretçi
  //src: Dest parametresine kopyalanacak karakterlerin bellek başlangıcını gösteren bir işaretçi.
    //n:  maksimum Kopyalanacak karakter sayısı
    //Src parametresi ile gösterilen bellek bölgesindeki karakterleri, 
    //n parametre değeri kadar uzunlukta, dest parametresindeki bellek bölgesine kopyalar.
void	*ft_memove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_p;
	unsigned char	*src_p;
	size_t			i;

	i = 0;
	dest_p = (unsigned char *)dest;
	// hedef işaretçiyi void* türünden bir unsigned char* tipine dönüştürdük
	src_p = (unsigned char *)src;
	if (!dest_p && !src_p)
		return (NULL);
	if (src < dest)
	{
		while (n >= 0)
		{
			dest_p[n] = src_p[n];
			n--;
		}
	}
	else if (src > dest)
		ft_memcpy(dest, src, n);
	return (dest);
}
