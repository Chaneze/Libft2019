/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:13:06 by charoua           #+#    #+#             */
/*   Updated: 2019/10/11 20:59:22 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	char	*begin;
	size_t	length;

	if (s1 && !s2)
		return (ft_strdup(s1));
	else if (!s1 && s2)
		return (ft_strdup(s2));
	else if (s1 && s2)
	{
		length = ft_strlen(s1) + ft_strlen(s2) + 1;
		if ((new = (char *)malloc(sizeof(char) * length)))
		{
			begin = new;
			while (*s1)
				*new++ = *s1++;
			while (*s2)
				*new++ = *s2++;
			*new = '\0';
			return (begin);
		}
	}
	return (NULL);
}
