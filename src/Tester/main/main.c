#include "../../libft.h"


int main(int c, char **v)
{
	(void)c;
	(void)v;
	printf("---> starting ...\n");

	//char src[] = "yassine";
	//char dst[] = "ajagrou";
	char spliter[] = "\n\n======================================";
	int i = 0;

	// test isascii
	printf("%s====> isascii\n\n", spliter);
	while(ft_isascii(++i))
		printf("| %d %c |", i , i );
	i = 0;
	// test atoi
	printf("%s====> atoi\n\n", spliter);
	printf("1232ssji3 %d\n", ft_atoi("1232ssji3"));
	printf("-1234 %d\n", ft_atoi("-1234"));
	printf("eww %d\n", ft_atoi("eww"));
	printf("01232 %d", ft_atoi("01232"));
	// test isdigit
	printf("%s====> isdigit\n\n", spliter);
	while(ft_isdigit(i + 48) &&  i < 200)
	{
		printf("%c | ", i + 48);
		i++;
	}
	// test isalnum
    printf("%s====> isalnum\n\n", spliter);
	i = 0;
	while(ft_isalnum(i + 'a') && i < 200)
	{
		printf("%c | ", i + 'a');
		i++;
	}
	printf("%s====> strchr\n\n", spliter);
	printf("%s\n", ft_strchr("yassine", 334));
	printf("%s\n", ft_strchr("i'm here", 105));

	//// strdup
	printf("%s====> strdup\n\n", spliter);
	char *s = ft_strdup("yassine");
	printf("%s\n", s);
	free(s);

	// ft_splite*
	printf("%s====> splite\n\n", spliter);
	const char str[] = "yassineWajagrouWhereWi'mWinWberhil";
	char **words = ft_split(str, 'W');
	i = 0;
	while(words[i])
	{
		printf("<%s>\n", words[i]);
		i++;
	}

	i = 0;
	while(words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);

	// ft_strjoin
	printf("%s====> strjoin\n\n", spliter);

	char *str_join = ft_strjoin(" hi from ", "morocco! ");
	printf("<%s>\n", str_join);
	free(str_join);

	// ft_strtrim
	printf("%s====> strtrim\n\n", spliter);

	char to_be[] = "2yass3inea2brakadabra2";
	char set[] = "123";
	char *trimed = ft_strtrim(to_be, set);
	printf("<%s>\n", trimed);
	trimed = ft_strtrim(NULL, NULL);
	printf("<%s>\n", trimed);
	free(trimed);






	printf("\n---> success ...\n");
	return 0;
}
