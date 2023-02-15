/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:23:55 by smlamali          #+#    #+#             */
/*   Updated: 2023/02/15 18:39:22 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int agrc, char *argv[])
{
	int		i;
	int		fd;
	int		lines;
	int		column;
	char	**map;
	char	*tmp;
	char	*all;

	i = 0;
	lines = 0;
	column = 0;
	fd = open(argv[1], O_RDONLY);
	tmp = get_next_line(fd);
	all = "";
	while (tmp)
	{	
		column = ft_strlen(tmp);
		all = ft_strjoin2(tmp, all);
		free(tmp);
		lines++;
		tmp = get_next_line(fd);
	}
	map = malloc(sizeof(char **) * lines);
	printf("%d", column);
	while (i < lines)
	{
		map[i] = malloc(sizeof(char *) * column);
		ft_strlcpy(map[i], all + (column * i) + i, column + 1);
		i++;
	}
	for (int k = 0; k < lines; k++)
	{
		write(1, map[k], column);
		write(1, "\n", 1);
	}
}
