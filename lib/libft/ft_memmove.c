/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:54:27 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/05/06 16:49:10 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
		while (len--)
			ft_memset(dst + len, ((char *)src)[len], 1);
	return (dst);
}
