/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:01:11 by charoua           #+#    #+#             */
/*   Updated: 2019/10/11 15:28:38 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t beg;
	size_t ends1;
	size_t endset;

	beg = 0;
	if (!s1)
		return (NULL);
	ends1 = ft_strlen(s1) - 1;
	endset = ft_strlen(set) - 1;
	while ((s1[beg] == set[beg]) && s1[beg] && set[beg])
		beg++;
	while ((s1[ends1] == set[endset]) && s1[ends1] && set[endset])
	{
		ends1--;
		endset--;
	}
	return (ft_substr(s1, beg, (ends1 - beg + 1)));
}
