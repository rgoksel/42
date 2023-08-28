/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:33:47 by rdemiray          #+#    #+#             */
/*   Updated: 2023/08/28 21:48:09 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(0);
}

int	ft_check_sort(t_stack *stack_a)
{
	int	i;

	i = stack_a->content;
	while (stack_a)
	{
		if (i > stack_a->content)
			return (0);
		i = stack_a->content;
		stack_a = stack_a->next;
	}
	return (1);
}

void	ft_double(t_stack *stack)
{
	int		value;
	t_stack	*current;
	t_stack	*runner;

	current = stack;
	while (current)
	{
		value = current->content;
		runner = current->next;
		while (runner)
		{
			if (runner->content == value)
				ft_error();
			runner = runner->next;
		}
		current = current->next;
	}
}

void	ft_check(char *str)
{
	size_t	i;

	i = 0;
	if (!ft_isdigit(str[i]) && str[i] != '+' && str[i] != '-')
		ft_error();
	if ((str[i] == '+' || str[i] == '-') && !ft_isdigit(str[i + 1]))
		ft_error();
	i = 1;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			ft_error();
		}
		i++;
	}
}
