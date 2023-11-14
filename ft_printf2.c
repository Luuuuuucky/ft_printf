/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <pameyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:13:41 by pameyer           #+#    #+#             */
/*   Updated: 2023/11/08 16:15:15 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nbr, const char format)
{
	if (nbr == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(nbr, format);
	return (ft_printf_len(nbr));
}

int	ft_print_unsigned(unsigned int nbr)
{
	int		print_len;
	char	*num;

	print_len = 0;
	if (nbr == 0)
		print_len += write(1, "0", 1);
	else
	{
		num = ft_unsigned_itoa(nbr);
		print_len += ft_print_str(num);
		free(num);
	}
	return (print_len);
}
