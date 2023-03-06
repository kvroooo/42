/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:41:10 by smlamali          #+#    #+#             */
/*   Updated: 2023/03/06 16:28:57 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	out_walls(char **map, int x, int y)
{
	while (map[x][y])
	{
		if (map[x][y] != '1')
			return (1);
		y++;
	}
	return (0);
}

int	ft_walls(char **map, int lines, int collumn)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (out_walls(map, x, y))
		return (1);
	// while (++x < lines)
	// {
	// 	if (map[x][0] != '1' || map[x][collumn - 1] != '1')
	// 		return (1);
	// }
	// if (out_walls(map, x, y))
	// 	return (1);
	return (0);
}
