/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:36:14 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/04/23 18:42:41 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*point;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (s_len <= start)
		return (ft_strdup(""));
	if ((s_len - start) < len)
		len = s_len - start;
	point = (char *)ft_calloc(len + 1, sizeof(char));
	if (!point)
		return (NULL);
	ft_strlcpy(point, (s + start), len + 1);
	return (point);
}
