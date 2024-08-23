#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdlib.h>

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
	if (!big || !little)
		return (NULL);
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

int main() {
    const char *haystack = "This is a simple example string example.";
    const char *needle = "example";
    
    size_t len = 30;
    char *result = ft_strnstr(haystack, needle, len);

    if (result) {
        printf("Found '%s' in haystack within the first %zu characters.\n", needle, len);
        printf("The substring starts at: %s\n", result);
    } else {
        printf("'%s' not found in haystack within the first %zu characters.\n", needle, len);
    }

    return 0;
}
