/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 20:56:22 by kchaozu           #+#    #+#             */
/*   Updated: 2019/04/21 16:45:23 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s1;
	int		i;

	i = 0;
	if (!s || !f || !(s1 = ft_strnew(ft_strlen(s))))
		return (NULL);
	else
	{
		while (s[i])
		{
			s1[i] = f(s[i]);
			i++;
		}
	}
	return (s1);
}
