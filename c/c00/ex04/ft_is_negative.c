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

void ft_is_negative(int n)
{	
	if (n<0)
	{
		write(1, &"N", 1);	
	}
	else
	{
		write(1, &"P", 1);
	}
}

int main()
{	
	int n=5;
   	ft_is_negative(n);
	return 0;
}


