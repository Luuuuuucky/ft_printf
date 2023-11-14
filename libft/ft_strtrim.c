/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:49:36 by pameyer           #+#    #+#             */
/*   Updated: 2023/10/19 17:57:56 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buf;
	ssize_t	start;
	ssize_t	end;
	ssize_t	buf_len;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	buf_len = end - start + 1;
	buf = (char *) ft_calloc(buf_len + 1, sizeof(char));
	if (!buf)
		return (NULL);
	ft_strlcpy(buf, s1 + start, buf_len + 1);
	buf[buf_len] = '\0';
	return (buf);
}
