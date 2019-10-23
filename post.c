/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   post.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 19:40:37 by kchaozu           #+#    #+#             */
/*   Updated: 2019/08/03 21:52:06 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"

static	char	**arrange_up(int i_min, char **tab)
{
	int i;

	i = 0;
	while (i + i_min < 4)
	{
		tab[i] = tab[i + i_min];
		i++;
	}
	while (i < 4 && i_min > 0)
	{
		tab[i] = "....\0";
		i++;
	}
	return (tab);
}

static	char	**arrange_left(int j_min, char **tab)
{
	int tmp;
	int i;
	int j;

	tmp = 0;
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (tab[i][j + j_min] != '\0')
		{
			tab[i][j] = tab[i][j + j_min];
			j++;
		}
		tmp = j_min;
		while (tmp > 0 && tmp > 0)
		{
			tab[i][4 - tmp] = '.';
			tmp--;
		}
		j = 0;
		i++;
	}
	return (tab);
}

static int		get_i_min(char **tab)
{
	int i;
	int j;
	int i_min;

	i = 0;
	j = 0;
	i_min = 0;
	while (i < 4)
	{
		while (tab[i][j] != '#' && tab[i][j] != '\0')
			j++;
		if (j == 4)
			i_min++;
		else
			return (i_min);
		j = 0;
		i++;
	}
	return (i_min);
}

static int		get_j_min(char **tab)
{
	int i;
	int j;
	int j_min;

	i = 0;
	j = 0;
	j_min = 4;
	while (i < 4)
	{
		while (tab[i][j] != '#' && tab[i][j] != '\0')
			j++;
		j_min = (j < j_min) ? j : j_min;
		j = 0;
		i++;
	}
	return (j_min);
}

t_tetrimino		*arrange(t_tetrimino *start)
{
	t_tetrimino *tmp;

	tmp = start;
	while (tmp)
	{
		tmp->tetrimino = arrange_left(get_j_min(tmp->tetrimino),\
				tmp->tetrimino);
		tmp->tetrimino = arrange_up(get_i_min(tmp->tetrimino), tmp->tetrimino);
		tmp = tmp->next;
	}
	return (start);
}
