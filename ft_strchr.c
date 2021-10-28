/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disle <disle@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:54:09 by disle             #+#    #+#             */
/*   Updated: 2021/10/14 14:52:48 by disle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int symb)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)symb)
			return ((char *)str + i);
		i++;
	}
	if ((char)symb == '\0')
		return ((char *)str + i);
	return (NULL);
}
