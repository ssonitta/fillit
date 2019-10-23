/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 19:44:49 by kchaozu           #+#    #+#             */
/*   Updated: 2019/04/27 17:12:27 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		index;
	char	*s1;
	char	sim;

	sim = (char)c;
	index = 0;
	s1 = (char *)s;
	if (!c)
		return ((char *)&s[ft_strlen(s)]);
	while (s1[index])
	{
		if (s1[index] == sim)
			return ((char *)&s1[index]);
		index++;
	}
	return (NULL);
}
