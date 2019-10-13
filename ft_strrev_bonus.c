/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:15:06 by caroua            #+#    #+#             */
/*   Updated: 2019/10/11 20:48:46 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrev(char *str)
{
	char *end;
	char *begin;
	char k;

	if (!str)
		return (NULL);
	end = str;
	begin = str;
	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (begin < end)
	{
		k = *end;
		*end = *begin;
		*begin = k;
		begin++;
		end--;
	}
	return (str);
}
