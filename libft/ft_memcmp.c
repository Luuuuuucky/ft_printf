/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:28:32 by pameyer           #+#    #+#             */
/*   Updated: 2023/10/19 19:54:30 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				d;

	str1 = (const unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	if (!n)
		return (0);
	d = 0;
	while (d < n)
	{
		if (str1[d] != str2[d])
			return ((const unsigned char)str1[d]
				- (const unsigned char)str2[d]);
		d++;
	}
	return (0);
}
