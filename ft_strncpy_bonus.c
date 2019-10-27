/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 20:49:30 by caroua            #+#    #+#             */
/*   Updated: 2019/10/18 19:16:50 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *tmpdst;

	tmpdst = dst;
	while (*src != '\0' && len > 0)
	{
		*tmpdst++ = *src++;
		len--;
	}
	while (len > 0)
	{
		*tmpdst++ = '\0';
		len--;
	}
	return (dst);
}
