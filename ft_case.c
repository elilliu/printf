/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:23:50 by elilliu           #+#    #+#             */
/*   Updated: 2023/11/15 11:15:02 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_case(va_list args, char format, int *count)
{
	unsigned long	ptr;

	if (format == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (format == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (format == 'u')
		ft_unsigned_putnbr(va_arg(args, unsigned long), count);
	else if (format == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef", count);
	else if (format == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF", count);
	else if (format == '%')
		ft_putchar('%', count);
	else if (format == 'p')
	{
		ptr = va_arg(args, unsigned long);
		if (ptr)
			return (ft_putstr("0x", count),
				ft_putnbr_base(ptr, "0123456789abcdef", count));
		else
			ft_putstr("(nil)", count);
	}
}
