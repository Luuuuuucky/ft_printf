/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:39:20 by pameyer           #+#    #+#             */
/*   Updated: 2023/10/19 17:08:59 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	count_digits(int n)
{
	ssize_t	cnt;

	cnt = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		cnt++;
	}
	while (n != 0)
	{
		cnt++;
		n /= 10;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char	*buf;
	ssize_t	buf_len;

	buf_len = count_digits(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	buf = (char *) ft_calloc(count_digits(n) + 1, 1);
	if (!buf)
		return (NULL);
	if (n < 0)
	{
		buf[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		if (buf[buf_len - 1] == '-')
			break ;
		buf[buf_len - 1] = n % 10 + 48;
		n /= 10;
		buf_len--;
	}
	return (buf);
}
