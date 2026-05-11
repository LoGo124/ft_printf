/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:18:35 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/05/02 10:24:54 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*point;

	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	point = malloc(size * nmemb);
	if (!point)
		return (NULL);
	ft_bzero(point, (size * nmemb));
	return (point);
}
