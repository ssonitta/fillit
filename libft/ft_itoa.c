/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 16:11:21 by kchaozu           #+#    #+#             */
/*   Updated: 2019/05/10 16:49:43 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		num;
	size_t	size;
	size_t	flag;

	flag = 0;
	if (n < 0)
		flag = 1;
	num = n;
	size = 1;
	while (num /= 10)
		size++;
	if (!(str = (char*)malloc(size + flag + 1)))
		return (NULL);
	if (flag)
		*str = '-';
	*(str + size + flag) = '\0';
	while (size--)
	{
		*(str + size + flag) = '0' + (char)(flag ? -(n % 10) : (n % 10));
		n /= 10;
	}
	return (str);
}
