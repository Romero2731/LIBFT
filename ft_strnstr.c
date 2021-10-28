/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disle <disle@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 14:44:20 by disle             #+#    #+#             */
/*   Updated: 2021/10/21 19:45:12 by disle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*small)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	if (big == small)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == small[j])
		{
			while (i + j < len && big[i + j] == small[j])
			{
				if (small[j + 1] == '\0')
					return ((char *)&big[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
