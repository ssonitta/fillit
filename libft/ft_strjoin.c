/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 21:58:24 by kchaozu           #+#    #+#             */
/*   Updated: 2019/04/27 18:34:07 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(s = malloc(sizeof(char) * len + 1)))
		return (NULL);
	else
	{
		while (s1[i])
		{
			s[i] = s1[i];
			i++;
		}
		while (s2[j])
			s[i++] = s2[j++];
		s[i] = '\0';
		return (s);
	}
}
