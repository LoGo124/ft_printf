/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:06:19 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/04/23 18:08:02 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	c;
	int		diff;

	c = -1;
	diff = 0;
	while (++c < n && !diff)
		diff = *(unsigned char *)(s1 + c) - *(unsigned char *)(s2 + c);
	return (diff);
}
