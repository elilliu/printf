/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:53:24 by elilliu           #+#    #+#             */
/*   Updated: 2023/11/15 11:12:27 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);
void			ft_putchar(char c, int *count);
void			ft_putstr(char *str, int *count);
void			ft_putnbr(int nb, int *count);
void			ft_case(va_list args, char format, int *count);
unsigned int	ft_strlen(char *str);
void			ft_putnbr_base(unsigned long nbr, char *base, int *count);
char			*ft_strchr(const char *s, int c);
void			ft_unsigned_putnbr(unsigned int nb, int *count);

#endif
