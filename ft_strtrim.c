/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:01:11 by charoua           #+#    #+#             */
/*   Updated: 2019/10/27 19:26:36 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (TRUE);
		set++;
	}
	return (FALSE);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;
	char	*trim;

	beg = 0;
	if (!s1)
		return (trim = ft_strdup("\0"));
	if (!set)
		return (trim = ft_strdup(s1));
	end = ft_strlen(s1) - 1;
	while (s1[beg] && ft_check_set(s1[beg], set))
		beg++;
	if (s1[beg] == '\0')
		return (trim = ((char *)s1) + beg);
	while (ft_check_set(s1[end], set))
		end--;
	return (ft_substr(s1, beg, (end - beg + 1)));
}
