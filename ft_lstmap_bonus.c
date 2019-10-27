/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:06:44 by charoua           #+#    #+#             */
/*   Updated: 2019/10/18 19:59:04 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*result;
	t_list		*first;

	if (!lst || !f)
		return (NULL);
	if (!(result = ft_lstnew((*f)(lst->content))))
		return (NULL);
	first = result;
	lst = lst->next;
	while (lst)
	{
		if (!((result->next) = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&first, (*del));
			return (NULL);
		}
		result = result->next;
		lst = lst->next;
	}
	return (first);
}
