/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:22:04 by charoua           #+#    #+#             */
/*   Updated: 2019/10/21 19:48:00 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	n;

	if (dstsize == 0)
		return (0);
	n = (ft_strlen(dst) < dstsize) ? ft_strlen(dst) : dstsize;
	n = n + ft_strlen(src);
	j = 0;
	i = ft_strlen(dst);
	while (j + i + 1 < dstsize && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[j + i] = '\0';
	return (n);
}
