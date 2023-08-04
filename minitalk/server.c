/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:17:30 by rdemiray          #+#    #+#             */
/*   Updated: 2023/08/04 23:11:05 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void handler_of_signals(int signal)
{
	printf("aaaaaaa\n");
	static unsigned char i = 0;
	static char bit = 0;
	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		write(1, &i, 1);
		bit = 0;
		i = 0;
	}
}

int main(void)
{
	my_putnbr(getpid());
	write(1, "\n", 1);
	while(1)
	{
		signal(SIGUSR1, handler_of_signals);
		signal(SIGUSR2, handler_of_signals);
		pause();
	}
}