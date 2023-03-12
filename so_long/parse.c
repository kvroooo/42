/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:23:55 by smlamali          #+#    #+#             */
/*   Updated: 2023/03/11 16:19:18 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// static void	**ft_read(char **map, int column, int lines)
// {
// 	for (int k = 0; k < lines; k++)
// 	{
// 		write(1, map[k], column);
// 		write(1, "\n", 1);
// 	}
// }

char	**ft_parse(int lines, int column, int fd, char **map)
{
	int		i;
	char	*tmp;
	char	*all;

	i = 0;
	tmp = get_next_line(fd);
	if (tmp == NULL)
		return (NULL);
	column = ft_strlen(tmp);
	while (tmp)
	{	
		all = ft_strjoin2(all, tmp);
		free(tmp);
		lines++;
		tmp = get_next_line(fd);
	}
	map = malloc(sizeof(char **) * lines);
	while (i < lines)
	{
		map[i] = malloc(sizeof(char *) * column);
		ft_strkcpy(map[i], all + (column * i) + i, column);
		i++;
	}
	map = ft_zero(map, column, lines);
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
	if (fd == -1)
		return (printf("Error : retry with a map this time c;"));
	map = ft_parse(lines, column, fd, map);
	if (map == NULL)
		return (printf("Error : something wrong with the mao :S\n"));
	column = ft_column(map);
	lines = ft_lines(map);
	printf("%d lignes \n%d colonnes\n", lines, column);
	ft_check(map, lines, column);
}
