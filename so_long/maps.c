/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:23:55 by smlamali          #+#    #+#             */
/*   Updated: 2023/02/09 15:19:59 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int agrc, char *argv[])
{
	int		fd;
	char	**map;

	fd = open(argv[1], O_RDONLY);
	map = malloc(sizeof(char *) * 2);
	map[0] = malloc(sizeof(char) * 3
	);
	if (!map)
		return (printf("L..."));

	printf("%s", map[0]);
}
