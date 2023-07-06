#include "libft.h"

void	ft_bzero(void *str, size_t num)
{
	unsigned char	*pbstr;

	pbstr = str;
	while (num > 0)
	{
		*pbstr++ = '\0';
		num--;
	}
}
