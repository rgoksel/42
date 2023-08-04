/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 21:54:20 by rdemiray          #+#    #+#             */
/*   Updated: 2023/08/04 22:58:21 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void shift_bits(int pid, char c)
{
	int i;
	i = 8;
	while(i--)
	{
		if(c>>i & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(50);
	}
}

int main(int argc, char **argv)
{
	int i;
	int pid;
	
	pid = ft_atoi(argv[1]);
	if (argc != 3)
		write(2, EARG, sizeof(EARG));
	i = 0;
	if(argv[2])
	{
		while(argv[2][i])
			shift_bits(argv[2][i++], pid);
	}
}
