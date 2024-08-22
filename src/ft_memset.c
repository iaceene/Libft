#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*d;

	i = 0;
	*d = s;
	while(i < n)
	{
		*d = c;
		d++;
		i++;
	}
	return s;
}