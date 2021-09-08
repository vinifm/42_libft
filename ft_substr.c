/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 09:31:23 by viferrei          #+#    #+#             */
/*   Updated: 2021/09/08 16:12:10 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		n;

	substr = (char *) malloc(len + 1);
	n = 0;
	if (s[0] == '\0' || !substr)
		return (0);
	while (start < ft_strlen(s) && len > 0 && s[start + n] != '\0')
	{
		substr[n] = s[start + n];
		n++;
		len--;
	}
	substr[n] = '\0';
	return (substr);
}
