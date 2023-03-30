/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:30:34 by rdemiray          #+#    #+#             */
/*   Updated: 2023/03/28 14:30:36 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 <= str [i] <= 90 || 97 <= str [i] <= 122)
			i++;
		else
			return (0);
	}
	if (str[i] == '\0')
	{
		return (1);
	}
}
