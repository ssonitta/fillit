/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 20:32:30 by kchaozu           #+#    #+#             */
/*   Updated: 2019/05/09 20:14:58 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t index;

	index = 0;
	if (!s || !f)
		return ;
	while (index < ft_strlen(s))
	{
		f(&s[index]);
		index++;
	}
}
