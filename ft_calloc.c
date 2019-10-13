/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:01:54 by charoua           #+#    #+#             */
/*   Updated: 2019/10/11 20:54:36 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;
	size_t	len;

	len = count * size;
	dst = NULL;
	if (len != 0)
	{
		dst = malloc(len);
		if (dst != NULL)
			ft_memset(dst, 0, len);
	}
	return (dst);
}
