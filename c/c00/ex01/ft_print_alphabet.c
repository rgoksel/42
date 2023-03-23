/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:06:34 by rdemiray          #+#    #+#             */
/*   Updated: 2023/03/23 13:06:34 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
	   write(1, &c, 1);
	   c++;
	}	
}

int main()
{
	ft_print_alphabet();
	return 0;
}
