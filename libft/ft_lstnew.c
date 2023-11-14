/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:08:20 by pameyer           #+#    #+#             */
/*   Updated: 2023/10/20 13:21:47 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ne;

	ne = ft_calloc(1, sizeof(t_list));
	if (!ne)
		return (NULL);
	ne->content = content;
	ne->next = NULL;
	return (ne);
}
