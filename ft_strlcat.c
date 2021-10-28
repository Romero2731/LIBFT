/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disle <disle@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:20:09 by disle             #+#    #+#             */
/*   Updated: 2021/10/13 14:50:27 by disle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_s;
	size_t	len_d;
	size_t	i;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	i = 0;
	if (dstsize < len_d + 1)
		return (len_s + dstsize);
	if (dstsize > len_d + 1)
	{
		while (src[i] != '\0' && len_d + 1 + i < dstsize)
		{
			dst[len_d + i] = src[i];
			i++;
		}
	}
	dst[len_d + i] = '\0';
	return (len_d + len_s);
}
