/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:40:53 by charoua           #+#    #+#             */
/*   Updated: 2019/10/18 18:59:00 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*begin;
	t_list	*next;

	if (lst && del)
	{
		begin = *lst;
		while (begin)
		{
			next = begin->next;
			(*del)(begin->content);
			free(begin);
			begin = next;
		}
		*lst = NULL;
	}
}
