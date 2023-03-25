/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 21:11:41 by rdemiray          #+#    #+#             */
/*   Updated: 2023/03/25 21:27:00 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int a)
{
	if (a == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		write(1, &"147483648", 9);
	}
	if (a < 0)
	{
		putchar('-');
		a = -a;
		ft_putnbr(a);
	}
	if (a > 9)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else
	{
		ft_putchar(a + 48);
	}
	return (0);
}
