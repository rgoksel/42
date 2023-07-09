/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:38:47 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/09 18:16:03 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		start;

	i = 0;
	start = 0;
	str = (char *)malloc((ft_strlen((char *) s1) + ft_strlen((char *) s2)) \
	* sizeof(char) + 1);
	if (!(str))
		return (0);
	while (s1[i])
	{
		str[start] = s1[i];
		i++;
		start++;
	}
	i = 0;
	while (s2[i])
	{
		str[start] = s2[i];
		i++;
		start++;
	}
	str[start] = '\0';
	return (str);
}
