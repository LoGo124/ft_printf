/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 10:11:16 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/05/11 16:37:05 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# include "../lib/libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putnbr_base(long int nbr, char *base);
int ft_putunbr_base(unsigned long int nbr, char *base);
int	ft_putstr(char *str);
int	ft_puthex(unsigned int n);
int	ft_putptr(void *);

#endif
