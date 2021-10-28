/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disle <disle@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:50:59 by disle             #+#    #+#             */
/*   Updated: 2021/10/14 14:09:54 by disle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t			i;
	unsigned char	*dst;

	i = 0;
	dst = (unsigned char *)dest;
	while (i < len)
	{
		dst[i] = (unsigned char)c;
		i++;
	}
	return (dst);
}
