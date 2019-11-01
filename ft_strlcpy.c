/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:17:21 by charoua           #+#    #+#             */
/*   Updated: 2019/10/21 14:37:54 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t length;

	length = ft_strlen(src);
	if (dstsize != 0)
	{
		if (dstsize > length)
		{
			ft_memmove((void *)dst, (const void *)src, length);
			dst[length] = '\0';
		}
		else if (dstsize <= length)
		{
			ft_memmove((void *)dst, (const void *)src, dstsize);
			dst[dstsize - 1] = '\0';
		}
	}
	return (length);
}
