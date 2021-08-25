/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:50:26 by viferrei          #+#    #+#             */
/*   Updated: 2021/08/25 09:19:03 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (str != 0)
	{
		if (*str == c)
			return ((char *) str);
		str++;
	}
	if (c == '\0')
		return ((char *) str);
	else
		return (NULL);
}
