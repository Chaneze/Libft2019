/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:17:21 by charoua           #+#    #+#             */
/*   Updated: 2019/10/10 17:00:06 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t length;
	size_t i;

	length = ft_strlen(src);
	if (dstsize != 0)
	{
		i = 0;
		while (i < dstsize && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		if (i < dstsize && !src[i])
			i++;
		dst[i - 1] = '\0';
	}
	return (length);
}
