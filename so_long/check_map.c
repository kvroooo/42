/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:55:17 by smlamali          #+#    #+#             */
/*   Updated: 2023/03/12 11:06:53 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check(char **map, int lines, int collumn)
{
	if (ft_walls(map, lines, collumn))
		printf("Error : No wall :/\n");
	ft_contain(map, lines, collumn);
}

char	**ft_cpy(char **map, int x, int y)
{
	int		i;
	char	**tmp;

	i = 0;
	tmp = malloc(sizeof(char **) * x);
	while (i < x)
	{
		tmp[i] = malloc(sizeof(char *) * y);
		ft_strkcpy(tmp, map, y - 1);
		tmp[i][y] = '\0';
		i++;
	}
	tmp[x] = '\0';
	return (tmp);
}

int	nb_collectibles(char **map, int lines, int collumn)
{
	int	c;
	int	x;
	int	y;

	c = 0;
	x = 0;
	while (x < lines)
	{
		y = 0;
		while (y < collumn)
		{
			if (map[x][y] == 'C')
				c++;
		}
		x++;
	}
	return (c);
}

int	ft_position(char **map, int lines, int collumn)
{
	int		x;
	int		y;
	int		collectibles;
	char	**tmp;

	x = 0;
	tmp = ft_cpy(map, lines, collumn);
	collectibles = nb_collectibles(map, lines, collumn);
	while (x < lines)
	{
		y = 0;
		while (y < collumn)
		{
			if (map[x][y] == 'P')
			{
				if (ft_path(tmp, x, y, &collectibles) || collectibles != 0)
					return (printf("Error : invalid path\n"));
				else
					return (0);
			}
			y++;
		}
		x++;
	}
	return (1);
}

int	ft_path(char **map, int x, int y, int *collectibles)
{
	static int	exit;	

	if (map[x][y] == '1')
		return (printf("Error : No path\n"));
	if (map[x][y] == 'C')
		*collectibles--;
	if (map[x][y] == 'E')
		exit = 1;
	map[x][y] = '1';
	ft_path(map, x - 1, y, collectibles);
	ft_path(map, x + 1, y, collectibles);
	ft_path(map, x, y - 1, collectibles);
	ft_path(map, x, y + 1, collectibles);
	return (exit);
}
