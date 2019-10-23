/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 20:36:34 by kchaozu           #+#    #+#             */
/*   Updated: 2019/04/27 18:30:56 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t index;

	index = 0;
	if (!s || !f)
		return ;
	while (index < ft_strlen(s))
	{
		f((int)index, &s[index]);
		index++;
	}
}
