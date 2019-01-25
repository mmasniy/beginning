#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

size_t				ft_strlen(const char *str);
size_t				ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
void				ft_putchar(char c);
void				ft_putstr(const char *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				*ft_memset (void *dst, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy (void *restrict dst, const void *restrict src, size_t n);
void				*ft_memccpy(void *restrict dst, const void *restrict src,\
								int c, size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi (const char *str);
int					ft_check(unsigned long long res, int sign);
char				*ft_strcpy(char *destination, const char *source);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strdup(const char *s1);
char				*ft_strcat (char *restrict dst, const char *restrict app);
char				*ft_strncat (char *restrict dst, const char *restrict app, size_t n);
char				*ft_strnstr(const char *strB, const char *strA, size_t len);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *strB, const char *strA);

#endif