/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disle <disle@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:21:21 by disle             #+#    #+#             */
/*   Updated: 2021/10/21 16:59:24 by disle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			i;
	size_t			lens;

	i = 0;
	substr = 0;
	if (s == NULL)
		return (NULL);
	lens = ft_strlen(s);
	if (lens < len)
		len = lens;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	if (start < lens)
		while (i < len && s[start])
			substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
