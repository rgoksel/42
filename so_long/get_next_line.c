#include "so_long.h"

char	*get_next_line(int fd)
{
	char	buffer;
	char	line[10240];
	int		b;
	int		i;

	if (fd < 0)
		return (NULL);
	i = 0;
	b = read(fd, &buffer, 1);
	while (b > 0)
	{
		line[i++] = buffer;
		if (buffer == '\n')
			break ;
		b = read(fd, &buffer, 1);
	}
	line[i] = '\0';
	if (b <= 0 && i == 0)
		return (NULL);
	return (ft_strdup(line));
}
