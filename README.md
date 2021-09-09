# 42_libft
### About
<blockquote>Summary: This project aims to code a C library regrouping usual functions that you’ll
be allowed to use in all your other projects</blockquote>

## Function prototypes and descriptions.
### `<ctype.h>` library.
* [`ft_isalpha`](ft_isalpha.c) - alphabetic character test.
* [`ft_isdigit`](ft_isdigit.c) - decimal-digit character test.
* [`ft_isalnum`](ft_isalnum.c) - alphanumeric character test.
* [`ft_isascii`](ft_isascii.c) - ASCII character test.
* [`ft_isprint`](ft_isprint.c) - printing character test (space character inclusive).
* [`ft_tolower`](ft_tolower.c) - upper case to lower case letter conversion.
* [`ft_toupper`](ft_toupper.c) - lower case to upper case letter conversion.

* char	*[`ft_strchr`](ft_strchr.c)(const char *str, int c);
* char	*[`ft_strrchr`](ft_strrchr.c)(const char *str, int c);
* size_t	[`ft_strlcat`](ft_strlcat.c)(char *dst, const char *src, size_t dstsize);
* size_t	[`ft_strlcpy`](ft_strlcpy.c)(char *dest, const char *src, size_t size);
* size_t	[`ft_strlen`](ft_strlen.c)(const char *str);
* int		[`ft_strncmp`](ft_strncmp.c)(const char *s1, const char *s2, size_t n);
* char	[`*ft_strnstr`](ft_strnstr.c)(const char *str, const char *to_find, size_t len);
* int		[`ft_atoi`](ft_atoi.c)(const char *str);
* void	*[`ft_calloc`](ft_calloc.c)(size_t count, size_t size);
* char	*[`ft_strdup`](ft_strdup.c)(const char *s1);
