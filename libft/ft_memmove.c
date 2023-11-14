/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:54:03 by pameyer           #+#    #+#             */
/*   Updated: 2023/10/18 13:00:06 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cd;
	unsigned char	*cs;

	cd = (unsigned char *) dest;
	cs = (unsigned char *) src;
	if (!dest && !src && n > 0)
		return (NULL);
	if (dest > src && dest < src + n)
	{
		i = n;
		while (i-- > 0)
			cd[i] = cs[i];
	}
	else
	{
		i = -1;
		while (++i < n)
			cd[i] = cs[i];
	}
	return (dest);
}
