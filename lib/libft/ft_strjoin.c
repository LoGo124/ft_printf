/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:43:56 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/04/23 18:45:24 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*point;
	size_t	size;		

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	point = ft_calloc(size + 1, sizeof(char));
	if (!point)
		return (NULL);
	ft_strlcpy(point, s1, ft_strlen(s1) + 1);
	ft_strlcat(point, s2, size + 1);
	return (point);
}
