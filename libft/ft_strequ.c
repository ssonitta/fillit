/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 21:06:10 by kchaozu           #+#    #+#             */
/*   Updated: 2019/04/16 21:20:35 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int index;
	int flag;

	index = 0;
	flag = 1;
	if (!s1 || !s2)
		return (0);
	while (s1[index] || s2[index])
	{
		if (s1[index] != s2[index])
			flag = 0;
		index++;
	}
	return (flag);
}
