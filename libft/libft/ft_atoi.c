#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	isaret;
	int	son;

	i = 0;
	isaret = 1;
	son = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str [i] == '+')
	{
		if (str[i] == '-')
			isaret *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{		
		son *= 10;
		son += str[i] - '0';
		i++;
	}
	son *= isaret;
	return (son);
}