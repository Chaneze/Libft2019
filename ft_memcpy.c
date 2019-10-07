/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:51:03 by charoua           #+#    #+#             */
/*   Updated: 2019/10/07 16:55:47 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*tmpdst;
	const char	*tmpsrc;

	tmpdst = (char *)dst;
	tmpsrc = (const char *)src;
	while (n > 0)
	{
		*tmpdst++ = *tmpsrc++;
		n--;
	}
	return (dst);
}
