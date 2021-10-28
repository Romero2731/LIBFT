/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disle <disle@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:48:43 by disle             #+#    #+#             */
/*   Updated: 2021/10/19 19:04:44 by disle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		len_1;
	int		len_2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	newstr = (char *)malloc((len_1 + len_2 + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	while (s1[i] != '\0')
		newstr[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		newstr[j++] = s2[i++];
	newstr[j] = '\0';
	return (newstr);
}
