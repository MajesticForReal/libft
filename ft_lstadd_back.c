/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:17:08 by anrechai          #+#    #+#             */
/*   Updated: 2021/11/30 16:01:33 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*curr;

	curr = *alst;
	if (*alst == NULL)
		*alst = new;
	else
	{
		while (curr->next)
			curr = curr->next;
		curr->next = new;
	}
}
