/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:44:46 by kchaozu           #+#    #+#             */
/*   Updated: 2019/08/03 22:01:01 by kchaozu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdlib.h>
#include "libft/libft.h"

static	char	**ft_fill_tab(char **tab, char *buf)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (j < ft_get_nb_tetrimino(buf))
	{
		tab[j] = (char*)malloc(sizeof(char) * 20 + 1);
		if (tab[j] == NULL)
			return (NULL);
		while (k < 20)
		{
			tab[j][k] = buf[i];
			k++;
			i++;
		}
		tab[j][20] = '\0';
		k = 0;
		j++;
		i++;
	}
	tab[j] = NULL;
	return (tab);
}

char			**read_stdin(char *argv)
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE + 1];
	char	**tmp;

	if ((fd = open(argv, O_RDONLY)) == -1)
		return (NULL);
	ret = 1;
	tmp = NULL;
	while ((ret = read(fd, buf, BUFF_SIZE)) != 0)
		buf[ret] = '\0';
	g_nb_tetrimino = ft_get_nb_tetrimino(buf);
	tmp = (char**)malloc(sizeof(char *) * ft_get_nb_tetrimino(buf) + 1);
	if (tmp == NULL)
		return (NULL);
	if (first_test(buf) == 0)
		return (NULL);
	tmp = ft_fill_tab(tmp, buf);
	return (tmp);
}

t_tetrimino		*ft_splittab(char **tab)
{
	int			i;
	t_tetrimino	*start;
	t_tetrimino	*ptr;

	i = 1;
	start = NULL;
	ptr = NULL;
	start = ft_newtetri(ft_strsplit(tab[0], '\n'), 0);
	ptr = start;
	while (i < g_nb_tetrimino)
	{
		ptr->next = ft_newtetri(ft_strsplit(tab[i], '\n'), i);
		ptr = ptr->next;
		i++;
	}
	ptr->next = NULL;
	return (start);
}

int		ft_get_nb_tetrimino(char *s)
{
	int i;
	int nb_tetri;

	i = 0;
	nb_tetri = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n' && (s[i + 1] == '\n' || s[i + 1] == '\0'))
			nb_tetri++;
		i++;
	}
	return (nb_tetri);
}

/* int count_tetri(char *buff)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (buff[i] != '\0')
    {
        if (buff[i] == '\n' && (buff[i + 1] == '\n' || buff[i + 1] == '\0'))
            count++;
        i++;
    }
    printf("COUNT: %d\n", count);
    return (count);
}

int count_charp(char *buff)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (buff[i] != '\n' && buff[i - 1] != '\n' && buff[i] != '\0')
    {
        if (buff[i] == '#')
            count++;
        i++;
    }
    return (count == 4 : 1 ? 0);

}

int valid_sumv(char sim)
{
    return ((sim == '.' || sim == '#' || sim == '\n') ? 1 : 0);
}

int     valid_str(char *buff)
{
    int i;
    int str;

    i = 0;
    str = 0;
    while (buff[i] != '\0')
    {
        if (buff[i] == '\n' && buff[i - 1] != '\n')
            str++;
        else if (buff[i] == '\n' &&  buff[i - 1] == '\n' && str != 4)
            return (0);
        else if (buff[i] == '\n' &&  buff[i - 1] == '\n' && str == 4)
            str = 0;
        i++;
    }
    return (1);


}

int valid_tetri(char *buff)
{
    int i;
    int str;
    int count;

    count = 0;
    str = 0;
    i = 0;
    while (buff[i] != '\0')
    {
        if (!valid_sumv(buff[i]))
            return (0);
        if ((buff[i] == '\n' && buff[i -1] != '\n' && count != 4) ||
        (buff[i] == '\n' && buff[i -1] == '\n' && count != 0))
            return (0);
        else if ((buff[i] == '\n' && count == 4) ||
        (buff[i] == '\n' && buff[i -1] == '\n' && count == 0))
            count = 0;
        else 
            count++;
        i++;
    }
    return (1);
}

int fillit(const int fd)
{
    char    buff[BUFF_SIZE + 1];
    int     res;
    char    **line;

    if (fd < 0 || BUFF_SIZE <= 0 || read(fd, buff, 0) < 0)
		return (0);
    while ((res = read(fd, buff, BUFF_SIZE)) > 0)
		  buff[res] = '\0';
    printf("%s\n", buff);
    printf("VALID 1?: %d\n", valid_tetri(buff));
    printf("VALID 2?: %d\n", valid_str(buff));
    line = (char **)malloc(sizeof(char *) * count_tetri(buff) + 1);
    return (line != NULL ? 1 : 0);    
}
*/
