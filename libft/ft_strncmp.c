/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:48:08 by pameyer           #+#    #+#             */
/*   Updated: 2023/10/19 19:57:24 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	d;

	if (!n)
		return (0);
	d = 0;
	while (d < n && s1[d] && s1[d] == s2[d])
		d++;
	if (d == n)
		return (0);
	return ((unsigned char)s1[d] - (unsigned char)s2[d]);
}
