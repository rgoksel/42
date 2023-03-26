/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:12:57 by rdemiray          #+#    #+#             */
/*   Updated: 2023/03/26 14:19:09 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	error(void)
{
	write(1, "ERROR - ", 8);
	write(1, "pozitif tam sayı giriniz", 25);
	ft_putchar('\n');
}

void	parca(int basla, int orta, int son, int sutun_sayisi)
{
	ft_putchar(basla);
	sutun_sayisi --;
	while (sutun_sayisi > 1)
	{
		ft_putchar(orta);
		sutun_sayisi--;
	}
	if (sutun_sayisi == 1)
		ft_putchar(son);
}

void	rush(int satirx, int sutuny)
{
	int	i;

	if (satirx > 0 && sutuny > 0)
	{
		i = 1;
		while (i <= satirx)
		{
			if (i == 1)
				parca('/', '*', '\\', sutuny);
			else if (i == satirx)
				parca('\\', '*', '/', sutuny);
			else
				parca('*', ' ', '*', sutuny);
			i++;
			ft_putchar('\n');
		}
	}
	else if (satirx <= 0 || sutuny <= 0)
		error();
}
