#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	char	*d;
	size_t	i;

	d = s;
	i = 0;
	while (i < n)
	{
		d[i] = 0;
		i++;
	}
}