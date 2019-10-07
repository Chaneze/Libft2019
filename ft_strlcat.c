/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:22:04 by charoua           #+#    #+#             */
/*   Updated: 2019/10/07 19:23:52 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*tmpdst;
	const char	*tmpsrc;
	size_t		n;
	size_t		dstlen;

	tmpdst = dst;
	tmpsrc = src;
	n = dstsize;
	while (*tmpdst != '\0' && n-- != 0)
		tmpdst++;
	dstlen = tmpdst - dst;
	n = dstsize - dstlen;
	if (n == 0)
		return (dstlen + ft_strlen(src));
	while (*tmpsrc != '\0')
	{
		if (n != 1)
		{
			*tmpdst++ = *tmpsrc;
			n--;
		}
		tmpsrc++;
	}
	*tmpdst = '\0';
	return (dstlen + (tmpsrc - src));
}
