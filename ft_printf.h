/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:26:20 by oumimoun          #+#    #+#             */
/*   Updated: 2023/12/06 22:22:56 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_do_the_work(char c, va_list args);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putaddress(unsigned long address);
int	ft_putbase(unsigned long nbr, char *base);
int	ft_putnbr(long nbr);

#endif
