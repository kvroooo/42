/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:23:55 by smlamali          #+#    #+#             */
/*   Updated: 2023/03/04 15:46:31 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_parse(int lines, int column, int fd, char **map)
{
	int		i;
	char	*tmp;
	char	*all;

	i = 0;
	all = "";
	tmp = get_next_line(fd);
	while (tmp)
	{	
		column = ft_strlen(tmp);
		all = ft_strjoin2(tmp, all);
		free(tmp);
		lines++;
		tmp = get_next_line(fd);
	}
	map = malloc(sizeof(char **) * lines);
	while (i < lines)
	{
		map[i] = malloc(sizeof(char *) * column);
		ft_strkcpy(map[i], all + (column * i) + i, column + 1);
		i++;
	}
	return (map);
}

int	main(int agrc, char *argv[])
{
	int		fd;
	int		lines;
	int		column;
	char	**map;

	lines = 0;
	column = 0;
	fd = open(argv[1], O_RDONLY);
	map = ft_parse(lines, column, fd, map);
	close(fd);
}
