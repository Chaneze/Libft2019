/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:13:45 by charoua           #+#    #+#             */
/*   Updated: 2019/10/18 18:06:22 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *last;

	if (alst)
	{
		if (*alst)
		{
			last = *alst;
			while (last->next)
				last = last->next;
			if (new)
				last->next = new;
		}
		else
			*alst = new;
	}
}
