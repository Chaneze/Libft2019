/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:06:44 by charoua           #+#    #+#             */
/*   Updated: 2019/10/09 19:24:06 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list		*result;
	t_list		*first;
	t_list		*elem;

	if (!lst || !f)
		return (NULL);
	elem = (*f)(lst->content);
	if (!(result = ft_lstnew(elem->content)))
		return (NULL);
	first = result;
	lst = lst->next;
	while (lst)
	{
		elem = (*f)(lst->content);
		if (!(result->next = ft_lstnew(elem->content)))
			return (NULL);
		result = result->next;
		lst = lst->next;
	}
	return (first);
}
