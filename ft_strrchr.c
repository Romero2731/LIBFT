/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disle <disle@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:47:23 by disle             #+#    #+#             */
/*   Updated: 2021/10/16 20:47:52 by disle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int symb)
{
	char	*result;
	int		i;

	i = 0;
	result = NULL;
	while (str[i])
	{
		if (str[i] == (char)symb)
			result = (char *)str + i;
		i++;
	}
	if (str[i] == '\0' && (char)symb == '\0')
		result = (char *)str + i;
	return (result);
}
