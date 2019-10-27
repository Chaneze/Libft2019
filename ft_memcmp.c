/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:58:16 by charoua           #+#    #+#             */
/*   Updated: 2019/10/21 18:41:59 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	i = 0;
	tmp1 = (unsigned char*)s1;
	tmp2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (tmp1[i] && tmp2[i] && i < n - 1
	&& (unsigned char)tmp1[i] == (unsigned char)tmp2[i])
		i++;
	if (n > 0)
		return ((unsigned char)tmp1[i] - (unsigned char)tmp2[i]);
	else
		return (0);
}
