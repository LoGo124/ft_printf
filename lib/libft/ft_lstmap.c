/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:13:26 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/04/24 18:20:00 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	node = ft_lstnew(f(lst -> content));
	if (!node)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	node -> next = ft_lstmap(lst -> next, f, del);
	return (node);
}
