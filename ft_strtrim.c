/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:00:53 by viferrei          #+#    #+#             */
/*   Updated: 2021/09/06 20:23:10 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	char	*str;

	if (*s1 == '\0' || *set == '\0')
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end && ft_strrchr(set, s1[end - 1]))
		end--;
	str = (char *) malloc(end + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s1, end + 1);
	return (str);
}
