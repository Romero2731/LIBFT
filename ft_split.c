/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disle <disle@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:23:06 by disle             #+#    #+#             */
/*   Updated: 2021/10/27 14:19:31 by disle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			word++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (word);
}

static void	ft_free_mass(char **mass)
{
	int	k;

	k = 0;
	while (mass[k] != NULL)
		free(mass[k++]);
	free(mass);
}

static char	*malloc_word(char *s, char c)
{
	int		i;
	char	*mass;

	i = 0;
	mass = NULL;
	while (s[i] != '\0' && s[i] != c)
		i++;
	mass = malloc(sizeof(char) * (i + 1));
	if (mass == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		mass[i] = s[i];
		i++;
	}
	mass[i] = '\0';
	return (mass);
}

char	**proc_split(char **mass, char *s, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		mass[k] = NULL;
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			mass[k] = malloc_word((char *)s + i, c);
			if (mass[k] == NULL)
			{
				ft_free_mass(mass);
				return (NULL);
			}
			k++;
		}
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	mass[k] = NULL;
	return (mass);
}

char	**ft_split(char const *s, char c)
{
	char	**mass;

	mass = NULL;
	if (!s)
		return (NULL);
	mass = (char **)malloc(sizeof(char *) * (count_word((char *)s, c) + 1));
	if (mass == NULL)
		return (NULL);
	mass = proc_split(mass, (char *)s, c);
	if (mass == NULL)
		return (NULL);
	return (mass);
}
