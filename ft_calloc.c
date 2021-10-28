/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disle <disle@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:43:34 by disle             #+#    #+#             */
/*   Updated: 2021/10/19 13:12:44 by disle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*str;
	size_t			res;

	res = count * size;
	str = (unsigned char *)malloc(res);
	if (str == NULL)
		return (NULL);
	if (str != NULL && (res) != 0)
		ft_bzero(str, res);
	return (str);
}
