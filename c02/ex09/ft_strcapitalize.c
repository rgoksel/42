/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:30:28 by rdemiray          #+#    #+#             */
/*   Updated: 2023/03/28 18:30:30 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i] <= 90 && str[i] >= 65)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (j == 1)
			{
				str[i] = str[i] - 32;
				j = 0;
			}
			else if (str[i] <= '9' && str[i] >= '0')
				j = 0;
			else
				j = 1;
		}
		i++;
	}
	return (str);
}
