/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <pameyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:13:11 by pameyer           #+#    #+#             */
/*   Updated: 2023/11/08 16:14:20 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_format(va_list args, const char format)
{
	int	print_size;

	print_size = 0;
	if (format == 'c')
		print_size += ft_print_char(va_arg(args, int));
	else if (format == 's')
		print_size += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		print_size += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_size += ft_print_nbr(va_arg(args, int));
	else if (format == 'u')
		print_size += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_size += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_size += ft_print_percent();
	return (print_size);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		print_size;

	i = 0;
	print_size = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_size += ft_format(args, str[i + 1]);
			i++;
		}
		else
		{
			print_size += write(1, &str[i], 1);
		}
		i++;
	}
	va_end(args);
	return (print_size);
}
