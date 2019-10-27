/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:14:18 by charoua           #+#    #+#             */
/*   Updated: 2019/10/21 14:13:36 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	unsigned int	i;

	i = 0;
	if (!(dst = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (s && (start < ft_strlen(s)))
	{
		while (len > 0 && s[start + i])
		{
			dst[i] = s[start + i];
			len--;
			i++;
		}
	}
	dst[i] = '\0';
	return (dst);
}
