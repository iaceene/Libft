#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int     ft_atoi(const char *nptr);
int     ft_isdigit(int c);
int     ft_isascii(int c);
int     ft_isalpha(int c);
int     ft_isalnum(int c);
void    ft_bzero(void *s, size_t n);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strrchr(const char *str, int c);
char    *ft_strnstr(const char *big, const char *little, size_t len);
int     ft_strncmp(const char *str1, const char *str2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
void    *ft_memset(void *s, int c, size_t n);
void    *ft_memcpy(void *dest_str, const void *src_str, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
int     ft_isprint(int c);
char    *ft_strdup(const char *s);
char    **ft_split(char const *s, char c);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_itoa(int n);

#endif
