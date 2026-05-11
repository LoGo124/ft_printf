/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 13:57:54 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/05/11 16:43:04 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/ft_printf.h"

int	ft_putptr(void *ptr)
{
	if (ptr)
		return(ft_putstr("0x") + ft_putunbr_base((long)ptr, "0123456789abcdef"));
	return (ft_putstr("(nil)"));
}
