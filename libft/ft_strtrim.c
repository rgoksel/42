/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:53:54 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/09 13:09:45 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		len;
	size_t		l1;
	char		*str;

	i = 0;
	len = (ft_strlen((char *) s1) - ft_strlen((char *) set));
	str = (malloc(len * sizeof(char) + 1));
	l1 = ft_strlen((char *) set);
	if (!str || !s1 || !set)
		return (NULL);
	while (ft_strchr(*set, *s1) && *s1)
		s1++;
		return(s1);
	while (ft_strchr(s1, *set) && *set)
		set++;
		return (set);
	
yapamadık ya tam tersi şeyi döndürüyo
}

*/