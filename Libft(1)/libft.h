#ifndef LIBFT_H
# define LIBFT_H


#include <unistd.h>
#include <stdlib.h>

int ft_atoi(const char *s);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);
int ft_isalnum (int ch);
int ft_isalpha (int argument);
int ft_isascii (int ch);
int ft_isdigit (int ch);
int ft_isprint (int arg);
void	*ft_memchr(const void *s, int c, size_t n);int ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
char *ft_strchr(const char *s, int c);
char *ft_strdup(char *src);
size_t ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
int ft_strlen(char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
int ft_tolower(int ch);
int ft_toupper(int ch);
// part 2
char	*ft_itoa(int n);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char const *s, char c);
void ft_striteri(char *s, void (*f)(unsigned int,
char*));
char	*ft_strjoin(char const *s1, char const s2);
char *ft_strmapi(char const *s, char (f)(unsigned int, char));
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);

#endif
