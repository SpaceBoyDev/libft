/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:15:35 by dario             #+#    #+#             */
/*   Updated: 2024/10/08 17:06:12 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		aux = *lst;
		*lst = (*lst)->next;
		del(aux->content);
		free(aux);
	}
	*lst = NULL;
}
