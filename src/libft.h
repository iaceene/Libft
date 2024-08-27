#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int     ft_atoi(const char *nptr);
int     is_digit(int c);
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
int     ft_isprint(int c);

#endif