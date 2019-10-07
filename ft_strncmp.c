/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:12:49 by charoua           #+#    #+#             */
/*   Updated: 2019/10/07 19:16:17 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((unsigned char)*s1 == (unsigned char)*s2 && n > 0)
	{
		if (*s1 == '\0' || *s2 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (((unsigned char)*--s1 - (unsigned char)*--s2));
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
