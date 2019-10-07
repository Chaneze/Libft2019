/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:17:21 by charoua           #+#    #+#             */
/*   Updated: 2019/10/07 19:24:58 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t length;
	size_t i;

	length = 0;
	while (src[length] != '\0')
		length++;
	if (dstsize == 0)
		return (length);
	i = 0;
	while (i < dstsize && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize && src[i] == '\0')
		i++;
	dst[i - 1] = '\0';
	return (length);
}
