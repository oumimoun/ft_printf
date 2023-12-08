/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:25:45 by oumimoun          #+#    #+#             */
/*   Updated: 2023/12/08 19:43:59 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_do_the_work(char c, va_list arg)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count += ft_putnbr((va_arg(arg, int)));
	else if (c == 'u')
		count += ft_putnbr((unsigned int)(va_arg(arg, int)));
	else if (c == 'x')
		count += ft_putbase((unsigned int)va_arg(arg, int), "0123456789abcdef");
	else if (c == 'X')
		count += ft_putbase((unsigned int)va_arg(arg, int), "0123456789ABCDEF");
	else if (c == 's')
		count += ft_putstr((char *)va_arg(arg, long));
	else if (c == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (c == 'p')
		count += ft_putaddress((unsigned long)va_arg(arg, long));
	else
		count += ft_putchar(c);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;

	if (write(1, 0, 0) == -1)
		return (-1);
	va_start(arg, format);
	count = 0;
	while (*format)
	{
		if (*format == '%' && !*(format + 1))
			break ;
		else if (*format == '%')
			count += ft_do_the_work(*(++format), arg);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(arg);
	return (count);
}
