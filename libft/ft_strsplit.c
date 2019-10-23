/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 17:38:04 by kchaozu           #+#    #+#             */
/*   Updated: 2019/04/27 18:33:23 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		str_count(char const *s, char c)
{
	int n;
	int i;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			n++;
			while (s[i] != c)
				i++;
		}
	}
	return (n);
}

static char		**tab_free(char **tab, size_t n)
{
	while (n)
	{
		free((void *)tab[n]);
		n--;
	}
	free((void *)tab);
	return (NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**res;

	j = 0;
	if (!s)
		return (NULL);
	if (!(res = (char **)malloc(sizeof(char *) * str_count(s, c) + 1)))
		return (NULL);
	while (*s)
		if (*s == c)
			s++;
		else
		{
			i = 0;
			while (s[i] != c && s[i])
				i++;
			if (!(res[j] = ft_strsub(s, 0, i)))
				return (tab_free(res, j));
			s = s + i;
			j++;
		}
	res[j] = NULL;
	return (res);
}
