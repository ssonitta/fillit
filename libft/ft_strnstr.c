/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 21:26:33 by kchaozu           #+#    #+#             */
/*   Updated: 2019/05/09 18:46:29 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		flag;

	i = -1;
	flag = 1;
	if (!ft_strlen(s2))
		return ((char *)s1);
	while (*(s1 + ++i) && i < len)
	{
		j = 0;
		if (*(s1 + i) == *(s2 + 0))
		{
			k = i;
			flag = 1;
			while (*(s1 + k) && *(s2 + j) && j < len && k < len)
				if (*(s1 + k++) != *(s2 + j++))
					flag = 0;
			if (flag && !*(s2 + j))
				return ((char *)s1 + i);
		}
	}
	return (NULL);
}
