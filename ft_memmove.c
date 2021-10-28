/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disle <disle@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:33:35 by disle             #+#    #+#             */
/*   Updated: 2021/10/14 18:52:31 by disle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t len)
{
	size_t				i;
	unsigned char		*dst;
	unsigned const char	*src;

	i = 0;
	dst = (unsigned char *)dest;
	src = (unsigned const char *)source;
	if (dst < src)
	{
		while (len > i)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while (len > 0)
		{
			dst[len - 1] = src[len - 1];
			len--;
		}
	}
	return (dst);
}
