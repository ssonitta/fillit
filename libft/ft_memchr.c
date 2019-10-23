/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 20:29:56 by kchaozu           #+#    #+#             */
/*   Updated: 2019/05/09 18:16:15 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*s1;

	s1 = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == (char)c)
			return ((void *)s1 + i);
		i++;
	}
	return (NULL);
}
