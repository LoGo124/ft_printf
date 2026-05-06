/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 10:11:42 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/05/06 14:45:01 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static int	ft_printv(char const *str, va_list args)
{
	if (*str == '%' && *(str + 1) == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (*str == '%' && *(str + 1) == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*str == '%' && *(str + 1) == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (*str == '%' && *(str + 1) == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (*str == '%' && *(str + 1) == 'u')
		return (ft_putnbr(va_arg(args, unsigned int)));
	else if (*str == '%' && *(str + 1) == 'x')
		return  (ft_puthex(va_arg(args, unsigned int)));
	else if (*str == '%' && *(str + 1) == 'X')
		return (ft_puthex(va_arg(args, unsigned int)));
	else if (*str == '%' && *(str + 1) == 'p')
		return (ft_putpt(va_arg(args, void *)));
	return (0);
}

int	ft_printf(char const *str, ...)
{
	int	i;
	int	count;
	va_list	args;

	va_start(args, str);
	i = -1;
	count = 0;
	while (str[++i])
	{
		if (str[i] == '%' && str[i + 1] == '%')
			count += ft_putchar(str[i++]);
		else if (str[i] == '%')
			count += ft_printv(str + i++, args);
		else
			count += ft_putchar(str[i]);
	}
	return (count);
}
