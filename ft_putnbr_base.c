/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:10:56 by elilliu           #+#    #+#             */
/*   Updated: 2023/11/15 11:11:10 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long nbr, char *base, int *count)
{
	if (nbr < 0)
		return ;
	if (nbr >= ft_strlen(base))
	{
		ft_putnbr_base(nbr / ft_strlen(base), base, count);
		ft_putnbr_base(nbr % ft_strlen(base), base, count);
	}
	else
		ft_putchar(base[nbr], count);
}
