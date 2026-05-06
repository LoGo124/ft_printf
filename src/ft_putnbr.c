/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 13:54:14 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/05/06 14:39:06 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/ft_printf.h"

int	ft_putnbr(int n)
{
	char	*str;
	int		len;

	str = ft_itoa(n);
	len = (int)ft_strlen(str);
	write(1, str, len);
	return (len);
}
