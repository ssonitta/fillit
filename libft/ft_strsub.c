/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 21:26:59 by kchaozu           #+#    #+#             */
/*   Updated: 2019/04/27 18:30:10 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	index;
	int				i;
	char			*p;

	index = start;
	i = 0;
	if (!s)
		return (NULL);
	if (!(p = malloc(sizeof(char) * len + 1)))
		return (NULL);
	else
	{
		while (s[index] && len-- > 0)
		{
			p[i] = s[index];
			index++;
			i++;
		}
		p[i] = '\0';
		return (p);
	}
}
