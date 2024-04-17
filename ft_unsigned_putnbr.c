/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:15:20 by elilliu           #+#    #+#             */
/*   Updated: 2023/11/14 18:24:50 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_putnbr(unsigned int nb, int *count)
{
	if (nb < 0)
		return ;
	else
	{
		if (nb > 9)
		{
			ft_unsigned_putnbr(nb / 10, count);
			ft_unsigned_putnbr(nb % 10, count);
		}
		else
			ft_putchar(nb + '0', count);
	}
}
