# 42_libft
### About
<blockquote>Summary: This project aims to code a C library regrouping usual functions that you’ll
be allowed to use in all your other projects</blockquote>

## Function prototypes and descriptions - Part 1
### `<ctype.h>` library.
* [`ft_isalpha`](ft_isalpha.c) - alphabetic character test.
* [`ft_isdigit`](ft_isdigit.c) - decimal-digit character test.
* [`ft_isalnum`](ft_isalnum.c) - alphanumeric character test.
* [`ft_isascii`](ft_isascii.c) - ASCII character test.
* [`ft_isprint`](ft_isprint.c) - printing character test (space character inclusive).
* [`ft_tolower`](ft_tolower.c) - upper case to lower case letter conversion.
* [`ft_toupper`](ft_toupper.c) - lower case to upper case letter conversion.

### `<string.h>` library.
* char		*[`ft_strchr`](ft_strchr.c)(const char *str, int c) - locates character in string.
* char		*[`ft_strrchr`](ft_strrchr.c)(const char *str, int c) - locates the last ocurrence of c.
* size_t	[`ft_strlcat`](ft_strlcat.c)(char *dst, const char *src, size_t dstsize) - appends at most dstsize - strlen(dst) of src to dst.
* size_t	[`ft_strlcpy`](ft_strlcpy.c)(char *dest, const char *src, size_t size) - copies up to size - 1 characters from src to dst and nul-terminates.
* size_t	[`ft_strlen`](ft_strlen.c)(const char *str) - gives legth of string.
* int		[`ft_strncmp`](ft_strncmp.c)(const char *s1, const char *s2, size_t n) - compares the first n characters of both strings.
* char		[`*ft_strnstr`](ft_strnstr.c)(const char *str, const char *to_find, size_t len) - locates a substring in a string.
* int		[`ft_atoi`](ft_atoi.c)(const char *str) - converts string to integer.
* void		*[`ft_calloc`](ft_calloc.c)(size_t count, size_t size) - allocates _count_ objects of _size_ size.
* char		*[`ft_strdup`](ft_strdup.c)(const char *s1) - duplicate string.

* void	[`ft_bzero`](ft_bzero.c)(void *str, size_t n) - write zeroes to a byte string.
* void	*[`ft_memchr`](ft_memchr.c)(const void *str, int c, size_t n) - locate byte in a byte string.
* int	[`ft_memcmp`](ft_memcmp.c)(const void *s1, const void *s2, size_t n) - compare byte string.
* void	*[`ft_memset`](ft_memset.c)(void *str, int c, size_t len) - fill a byte string with a byte value.
* void	*[`ft_memcpy`](ft_memcpy.c)(void *dst, const void *src, size_t len) - copy memory area. Overlapping is undefined.
* void	*[`ft_memmove`](ft_memmove.c)(void *dst, const void *src, size_t len) - copies len bytes from src to dst. The strings may overlap.

## Part 2 -  Adittional functions.

* char	*[`ft_substr`](ft_substr.c)(char const *s, unsigned int start, size_t len) - creates a substring of size _len_ from index _start_.
* char	*[`ft_strjoin`](ft_strjoin.c)(char const *s1, char const *s2) - concatenates s1 and s2 in a new string.
* char	*[`ft_strtrim`](ft_strtrim.c)(char const *s1, char const *set) - returns a copy of s1 with the characters specified in _set_ removed from the beginning and the end.
* char	**[`ft_split`](ft_split.c)(char const *s, char c) - returns an array of strings obtained by splitting _s_ using _c_ as a delimiter.
* char	*[`ft_itoa`](ft_itoa.c)(int n) - converts integer to string.
* char	*[`ft_strmapi`](ft_strmapi.c)(char const *s, char (*f)(unsigned int, char)) - creates a new string with the function _f_ applied to the characters in _s_.
* void	[`ft_striteri`](ft_striteri.c)(char *s, void (*f)(unsigned int, char*)) - applies the function _f_ to each character in _s_.
* void	[`ft_putchar_fd`](ft_putchar_fd.c)(char c, int fd) - outputs _c_ to given file descriptor.
* void	[`ft_putstr_fd`](ft_putstr_fd.c)(char *s, int fd) - outputs _s_ to given file descriptor.
* void	[`ft_putnbr_fd`](ft_putnubr_fd.c)(int n, int fd) - outputs _n_ to given file descriptor.
* void	[`ft_putendl_fd`](ft_putendl_fd.c)(char *s, int fd) - outpurs _s_ to given file descriptor and adds a newline.

## Bonus functions.

* t_list	*[`ft_lstnew`](ft_lstnew.c)(void *content) - creates a new element.
* void		[`ft_lstadd_front`](ft_lstadd_front.c)(t_list **lst, t_list *new) - adds _new_ at the beginning of the list.
* int		[`ft_lstsize`](ft_lstsize.c)(t_list *lst) - counts number of elements in the list.
* t_list	*[`ft_lstlast`](ft_lstlast.c)(t_list *lst) - returns the last element of the list.
* void		[`ft_lstadd_back`](ft_lstadd_back.c)(t_list **lst, t_list *new) - adds _new_ at the end of the list.
* void		[`ft_lstdelone`](ft_lstdelone.c)(t_list *lst, void (*del)(void*)) - frees the memory of the element's content.
* void		[`ft_lstclear`](ft_lstclear.c)(t_list **lst, void (*del)(void*)) - deletes and frees the given element and every successor.
* void		[`ft_lstiter`](ft_lstiter.c)(t_list *lst, void (*f)(void *)) - iterates _lst_ and applies _f_ to the content of each element.
* t_list	*[`ft_lstmap`](ft_lstmap.c)(t_list *lst, void *(\*f)(void *), void (*del)(void *)) - creates a new list from the application of _f_ to the content of each elements.

