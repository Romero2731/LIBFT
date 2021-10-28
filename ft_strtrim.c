/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disle <disle@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:22:12 by disle             #+#    #+#             */
/*   Updated: 2021/10/20 11:25:51 by disle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char static	ft_set(char symb, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (symb == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	int		i;

	i = 0;
	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_set(s1[start], set))
		start++;
	while (end > start && ft_set(s1[end - 1], set))
		end--;
	if (start == 0 && end == ft_strlen(s1))
		return (ft_strdup(s1));
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (str == NULL)
		return (NULL);
	while (end > start)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
