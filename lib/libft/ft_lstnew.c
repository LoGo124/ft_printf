/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:50:40 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/05/02 10:21:53 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n_lst;

	n_lst = malloc(sizeof(t_list));
	if (!n_lst)
		return (NULL);
	n_lst -> content = content;
	n_lst -> next = (NULL);
	return (n_lst);
}
