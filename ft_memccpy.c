/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:32:19 by charoua           #+#    #+#             */
/*   Updated: 2019/10/21 18:57:43 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;

	tmpdst = (unsigned char*)dst;
	tmpsrc = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		tmpdst[i] = tmpsrc[i];
		if (tmpdst[i] == (unsigned char)c)
			return ((void*)(&tmpdst[i + 1]));
		i++;
	}
	return (NULL);
}
