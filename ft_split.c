/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:37:10 by charoua           #+#    #+#             */
/*   Updated: 2019/10/20 17:30:44 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_nb_w(char const *str, char c)
{
	int i;
	int word;
	int count;

	i = 0;
	word = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != c && str[i])
		{
			i++;
			word = 1;
		}
		if (str[i] == c)
			i++;
		if (word == 1)
		{
			count++;
			word = 0;
		}
	}
	return (count);
}

static size_t	ft_s(char const *s, char c, int i)
{
	size_t length;

	length = 0;
	while (s[i] != c && s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

static char		**ft_free_dst(char **dst, int j)
{
	int i;

	i = 0;
	while (i < j)
	{
		free(dst[i]);
		i++;
	}
	free(dst);
	dst = NULL;
	return (dst);
}

char			**ft_split(char const *s, char c)
{
	char	**dst;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!s || !(dst = (char **)malloc(sizeof(char *) * (ft_nb_w(s, c) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != '\0')
		{
			k = 0;
			if (!(dst[j] = (char *)malloc(sizeof(char) * (ft_s(s, c, i) + 1))))
				return (ft_free_dst(dst, j));
			while (s[i] != c && s[i])
				dst[j][k++] = s[i++];
			dst[j++][k] = '\0';
		}
	}
	dst[j] = NULL;
	return (dst);
}
