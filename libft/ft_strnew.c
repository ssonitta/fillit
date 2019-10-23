/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 20:13:26 by kchaozu           #+#    #+#             */
/*   Updated: 2019/04/27 17:57:33 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *p;

	if (size + 1 < size)
		return (0);
	if (!(p = malloc(sizeof(char) * size + 1)))
		return (NULL);
	else
	{
		ft_bzero(p, size + 1);
		return (p);
	}
}
