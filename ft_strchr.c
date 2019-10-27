/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:09:35 by charoua           #+#    #+#             */
/*   Updated: 2019/10/21 19:05:46 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmps;

	i = 0;
	tmps = (char*)s;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
		{
			return (&tmps[i]);
		}
		i++;
	}
	if (tmps[i] == (unsigned char)c)
		return (&tmps[i]);
	return (NULL);
}
