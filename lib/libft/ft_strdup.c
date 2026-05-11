/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:22:30 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/04/23 18:34:28 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*point;

	point = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!point)
		return (NULL);
	ft_strlcpy(point, s1, (ft_strlen(s1)+1));
	return (point);
}
