/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 09:31:23 by viferrei          #+#    #+#             */
/*   Updated: 2021/08/31 14:41:56 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		n;

	substr = malloc(len + 1);
	n = 0;
	if (s[0] == '\0' || start > ft_strlen(s) || !substr)
		return (NULL);
	while (len-- && s[start + n] != '\0')
	{
		substr[n] = s[start + n];
		n++;
	}
	substr[n] = '\0';
	return (substr);
}
