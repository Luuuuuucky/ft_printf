/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:17:46 by pameyer           #+#    #+#             */
/*   Updated: 2023/10/19 20:23:15 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*buff;

	i = 0;
	buff = NULL;
	while (s[i])
	{
		if (s[i] == (const char) c)
			buff = (char *) s + i;
		i++;
	}
	if (s[i] == (const char) c)
		buff = (char *) s + i;
	return (buff);
}
