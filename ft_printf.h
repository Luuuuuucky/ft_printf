/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <pameyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:06:48 by pameyer           #+#    #+#             */
/*   Updated: 2023/11/08 16:26:02 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

void	ft_put_ptr(unsigned long long nbr);
void	ft_put_str(char *str);
char	*ft_unsigned_itoa(unsigned int nbr);
void	ft_put_hex(unsigned int nbr, const char format);
int		ft_printf_len(unsigned long long nbr);
int		ft_num_len(unsigned int nbr);
int		ft_format(va_list args, const char format);
int		ft_printf(const char *str, ...);
int		ft_print_char(int str);
int		ft_print_str(char *str);
int		ft_print_percent(void);
int		ft_print_nbr(int nbr);
int		ft_print_ptr(unsigned long long ptr);
int		ft_print_hex(unsigned int nbr, const char format);
int		ft_print_unsigned(unsigned int nbr);

#endif
