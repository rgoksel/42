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

void ft_print_numbers(void)
{
	char number = '0';
	while(number<='9')
	{
		write(1, &number, 1);
		number++;	
	}
}

int main(){
	ft_print_numbers();
}


