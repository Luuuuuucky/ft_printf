/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:08:20 by pameyer           #+#    #+#             */
/*   Updated: 2023/10/19 19:40:17 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*buf;
	unsigned int	i;

	buf = (char *) ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!buf)
		return (NULL);
	i = 0;
	while (s[i])
	{
		buf[i] = (*f)(i, s[i]);
		i++;
	}
	buf[i] = 0;
	return (buf);
}
