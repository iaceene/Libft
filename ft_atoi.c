#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sing;
	int	res;

	i = 0;
	res = 0;
	sing = 1;
	while (nptr[i] == ' ' || nptr[i] == '\t')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sing *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - 48);
		i++;
	}
	return (res * sing);
}
