/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:17:21 by charoua           #+#    #+#             */
/*   Updated: 2019/10/21 19:20:07 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;

	n = ft_strlen(src);
	i = 0;
	if (src[0] == '\0')
		dst[0] = '\0';
	else if (dstsize > 0)
	{
		while (i < dstsize - 1)
		{
			*dst++ = *src;
			if (*src != '\0')
				src++;
			i++;
		}
		*dst = ('\0');
	}
	return (n);
}
