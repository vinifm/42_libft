/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:52:15 by viferrei          #+#    #+#             */
/*   Updated: 2021/08/24 12:06:55 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	dest_size;
	size_t	src_size;

	i = 0;
	n = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size < dest_size)
	{
		return (dest_size + (size - 1));
	}
	while (dest[n] != 0)
	{
		n++;
	}
	while ((dest_size + i) < (size - 1) && src[i] != 0)
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	return (dest_size + src_size);
}