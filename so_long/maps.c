/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:23:55 by smlamali          #+#    #+#             */
/*   Updated: 2023/02/11 17:17:06 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int agrc, char *argv[])
{
	int		fd;
	int		i;
	char	**map;
	char	*tmp;
	char	*all;

	i = 0;
	fd = open(argv[1], O_RDONLY);
	while (tmp = get_next_line(fd))
	{	
		all = ft_strjoin2(tmp, all);
		free(tmp);
	}
	map = ft_split(all, '\n');
	printf("%s\n", map[0]);
	printf("%s\n", map[1]);
	printf("%s\n", map[2]);
	printf("%s\n", map[3]);
	while (map[i])
		free(map[i++]);
	free(map);
	free(all);
}

// while (tmp = get_next_line(fd))
	// {
	// 	map[i++] = ft_split(tmp, '\n');
	// 	free(tmp);
	// }