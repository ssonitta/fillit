/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 21:20:58 by kchaozu           #+#    #+#             */
/*   Updated: 2019/04/16 22:33:41 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	index;
	int		flag;

	index = 0;
	flag = 1;
	if (!s1 || !s2)
		return (0);
	while ((s1[index] || s2[index]) && index < n)
	{
		if (s1[index] != s2[index])
			flag = 0;
		index++;
	}
	return (flag);
}
