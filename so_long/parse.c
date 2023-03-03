/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:23:55 by smlamali          #+#    #+#             */
/*   Updated: 2023/03/03 15:14:40 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*get_all(char *all, int lines, int column, char *argv)
{
	int		fd;
	char	*tmp;

	all = "";
	fd = open(argv[1], O_RDONLY);
	tmp = get_next_line(fd);
	while (tmp)
	{	
		column = ft_strlen(tmp);
		all = ft_strjoin2(tmp, all);
		free(tmp);
		lines++;
		tmp = get_next_line(fd);
	}
	return (all);
}

int	main(int agrc, char *argv[])
{
	int		i;
	int		lines;
	int		column;
	char	**map;
	char	*all;

	i = 0;
	lines = 0;
	column = 0;
	all = get_all(all, lines, column, argv[1]);
	map = malloc(sizeof(char **) * lines);
	while (i < lines)
	{
		map[i] = malloc(sizeof(char *) * column);
		ft_strkcpy(map[i], all + (column * i) + i, column + 1);
		i++;
	}
	for (int k = 0; k < lines; k++)
	{
		write(1, map[k], column);
		write(1,"\n", 1);
	}
}
