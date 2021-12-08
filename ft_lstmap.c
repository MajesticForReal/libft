/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:17:54 by anrechai          #+#    #+#             */
/*   Updated: 2021/11/30 16:05:33 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*curr;

	curr = lst;
	if (curr)
	{
		new = ft_lstnew(f(lst->content));
		curr = curr->next;
	}
	while (curr)
	{
		tmp = ft_lstnew(f(curr->content));
		if (!tmp)
			ft_lstclear(&curr, del);
		else
		{
			ft_lstadd_back(&new, tmp);
			curr = curr->next;
		}
	}
	return (new);
}
