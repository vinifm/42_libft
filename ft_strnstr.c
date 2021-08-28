/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:52:33 by viferrei          #+#    #+#             */
/*   Updated: 2021/08/28 16:22:49 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strchars(char *str)
{
	int	n;

	n = 0;
	while (str[n] != 0)
	{
		n++;
	}
	return (n - 1);
}

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	int		i;
	int		j;
	size_t	l;

	i = 0;
	l = 0;
	if (to_find[0] == 0)
	{
		return (str);
	}
	while (l < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < (int)len)
		{
			if (j == strchars(to_find))
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
		l++;
	}
	return (0);
}
