#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int				ft_isalnum(int c);
int 			ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);

// Returns a pointer to the first occurrence of c in the string str
const char		*ft_strchr(const char *str, int c);
// Returns a pointer to the last occurrence of c in the string str
const char		*ft_strrchr(const char *str, int c);
size_t			ft_strlcat(char *dest, char *src, size_t size);
size_t			ft_strlcpy(char *dest, char *src, size_t size);
size_t			ft_strlen(const char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(char *str, char *to_find, unsigned int len);

void			ft_bzero(void *str, size_t n);
// Sets to c the first len bytes of the block of memory pointed by ptr.
void			ft_memset(void *str, int c, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t len);

void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif
