/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:24:47 by viferrei          #+#    #+#             */
/*   Updated: 2021/08/25 09:19:59 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*str_end;

	str_end = ft_strchr(str, '\0');
	while (str != 0)
	{
		if (*str_end == c)
			return (str_end);
		str++;
		str_end--;
	}
	return (NULL);
}
