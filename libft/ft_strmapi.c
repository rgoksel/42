/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:34:25 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/09 21:30:24 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*str;

	i = 0;
	len = ft_strlen((char *)s);
	if (!s || !f)
		return (0);
	str = (char *)malloc(sizeof(char) * len +1);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
	char *s = "wrthery";
	char *a = ft_strmapi(s, ft_toupper);

	printf("%s", a);
	return 0;
}