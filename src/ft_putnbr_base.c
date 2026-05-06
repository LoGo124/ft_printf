/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:27:07 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/05/06 17:23:19 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static int	check_base(char *str)
{
	int	c;
	int	i;

	c = 0;
	while (str[c])
	{
		if (str[c] == '+' || str[c] == '-')
			return (0);
		i = c + 1;
		while (str[i])
		{
			if (str[c] == str[i])
				return (0);
			i++;
		}
		c++;
	}
	return (c);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int	count;
	int	c;

	count = 0;
	c = check_base(base);
	if (!c || c == 1)
		return (0);
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (-(nbr / c))
			count = ft_putnbr_base(-(nbr / c), base);
		write(1, &base[-(nbr % c)], 1);
	}
	else if (nbr < c)
		write(1, &base[nbr], 1);
	else
	{
		count = ft_putnbr_base(nbr / c, base);
		write(1, &base[nbr % c], 1);
	}
	return (count + 1);
}
