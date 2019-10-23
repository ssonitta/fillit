/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 17:41:16 by kchaozu           #+#    #+#             */
/*   Updated: 2019/04/27 18:34:52 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len;

	len = ft_strlen(dst);
	if (size < len + 1)
		return (size + ft_strlen(src));
	if (size > len + 1)
		ft_strncat(dst, (char*)src, size - len - 1);
	return (len + ft_strlen(src));
}
