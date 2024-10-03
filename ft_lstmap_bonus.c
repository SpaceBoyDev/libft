/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:32:40 by dario             #+#    #+#             */
/*   Updated: 2024/09/30 20:50:03 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;

	list = 0;
	while (lst)
	{
		node = ft_lstnew(lst->content);
		if (!node)
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		node->content = f(node->content);
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}
