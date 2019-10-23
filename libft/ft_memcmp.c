/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 20:07:28 by kchaozu           #+#    #+#             */
/*   Updated: 2019/04/27 17:44:51 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*p1;
	unsigned char	*p2;

	index = 0;
	if (s1 == s2)
		return (index);
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n-- && !index)
		index = *p1++ - *p2++;
	return (index);
}
