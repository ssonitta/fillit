/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 22:36:50 by kchaozu           #+#    #+#             */
/*   Updated: 2019/04/27 18:09:55 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	n;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (s[i] == '\0')
		return (ft_strnew(0));
	n = i;
	while (s[n] != '\0')
		n++;
	n--;
	while (s[n] == ' ' || s[n] == '\t' || s[n] == '\n')
		n--;
	return (ft_strsub(s, i, n - i + 1));
}
