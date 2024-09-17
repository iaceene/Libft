#include "stdlib.h"

static int	ft_strcheck(char *str, char *word, size_t index, size_t len)
{
	size_t i;
	size_t lenght;

	lenght = 0;
    i = 0;
	while(word[lenght])
		lenght++;
	while((str[index]) 
    && (str[index] == word[i])
    && (index < len))
	{
		index++;
		i++;
	}
	if(lenght == i)
		return (1);
	return (0);
}

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;

    i = 0;
	if (!big)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len)
	{
		if(big[i] == little[0])
		{
			if (ft_strcheck((char *)big, (char *)little, i, len))
				return ((char *)big + i); 
		}
		i++;
	}
	return (NULL);
}