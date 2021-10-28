/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disle <disle@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:17:20 by disle             #+#    #+#             */
/*   Updated: 2021/10/20 16:49:29 by disle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	ft_count(int n)
{
	size_t	count;

	count = 1;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n / 10 > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*strn;
	int		size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_count(n);
	strn = (char *)malloc(sizeof(char) * size + 1);
	if (strn == NULL)
		return (NULL);
	if (n < 0)
	{
		strn[0] = '-';
		n = -n;
	}
	strn[size--] = '\0';
	while (n / 10 > 0)
	{
		strn[size--] = (n % 10) + '0';
		n /= 10;
	}
	strn[size] = n + '0';
	return (strn);
}
