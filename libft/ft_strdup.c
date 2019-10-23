/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:09:20 by kchaozu           #+#    #+#             */
/*   Updated: 2019/04/16 22:34:19 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *p;

	p = (char*)malloc(ft_strlen((char*)s) + 1);
	if (p != NULL)
		ft_strcpy(p, (char *)s);
	return (p);
}
