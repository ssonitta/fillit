/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:25:28 by kchaozu           #+#    #+#             */
/*   Updated: 2019/04/27 16:41:47 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int				i;
	unsigned char	*d;

	d = (unsigned char*)dst;
	i = 0;
	while (src[i] != '\0')
	{
		d[i] = (unsigned char)src[i];
		i++;
	}
	d[i] = '\0';
	return ((char*)d);
}
