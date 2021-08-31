/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:47:15 by viferrei          #+#    #+#             */
/*   Updated: 2021/08/31 19:50:47 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strs(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			count++;
			while (*s != '\0' && s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static size_t	count_bytes(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	*start;
	char	**split;

	len = 0;
	start = s;
	**split = malloc(count_bytes(s, c) + 1);
	while (*s != '\0')
	{
		s++;
		len++;
		if (*s == c)
			*split = ft_substr(start, 0, len);
			start = s + 1;
	}
}
