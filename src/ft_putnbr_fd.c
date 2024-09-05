#include "libft.h"

static int	ft_int_len(long n)
{
	int len;

	len = 0;
	if (n < 0)
		n *= -1;  
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_cpy(long nbr, char *str, int len)
{
	while(nbr)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
}

static void	ft_fill_bites(char *list, int len)
{
	while(len < 12)
		list[len++] = '\0';

}

void	ft_putnbr_fd(int n, int fd)
{
	char	list[12];
	int		len;
	long	nbr;

	nbr = n;
	len = ft_int_len(nbr);
	if (nbr == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}	
	if (nbr < 0)
	{
		len++;
		list[0] = '-';
		nbr *= -1;
	}
	ft_cpy(nbr, list, len);
	ft_fill_bites(list, len);
	ft_putendl_fd(list, fd);
}