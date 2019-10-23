/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 16:43:42 by kchaozu           #+#    #+#             */
/*   Updated: 2019/04/21 21:28:59 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s1;
	unsigned int	i;

	i = 0;
	if (!s || !f || !(s1 = ft_strnew(ft_strlen(s))))
		return (NULL);
	else
	{
		while (s[i])
		{
			s1[i] = f(i, s[i]);
			i++;
		}
	}
	return (s1);
}
