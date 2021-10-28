/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disle <disle@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:13:26 by disle             #+#    #+#             */
/*   Updated: 2021/10/24 15:18:51 by disle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*dst;

	len = ft_strlen(s1);
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (dst)
	{
		while (len >= 0)
		{
			dst[len] = s1[len];
			len--;
		}
		return (dst);
	}
	else
		return (NULL);
}
