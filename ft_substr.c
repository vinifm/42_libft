/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 09:31:23 by viferrei          #+#    #+#             */
/*   Updated: 2021/09/09 10:26:49 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		n;
	size_t	slen;

	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	if (slen - start >= len)
		substr = (char *) malloc(len + 1);
	else
		substr = (char *) malloc(slen - start + 1);
	if (s[0] == '\0' || !substr)
		return (0);
	n = 0;
	while (start < slen && len > 0 && s[start + n] != '\0')
	{
		substr[n] = s[start + n];
		n++;
		len--;
	}
	substr[n] = '\0';
	return (substr);
}
