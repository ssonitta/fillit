/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 17:00:49 by kchaozu           #+#    #+#             */
/*   Updated: 2019/05/09 20:27:18 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			index;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	index = 0;
	if (n == 0)
		return (0);
	while (p1[index] && (p1[index] == p2[index]) && index < n - 1)
		index++;
	return (p1[index] - p2[index]);
}
