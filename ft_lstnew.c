/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disle <disle@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 13:29:22 by disle             #+#    #+#             */
/*   Updated: 2021/10/27 14:49:40 by disle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (struct s_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (new);
	new->content = content;
	new->next = NULL;
	return (new);
}
