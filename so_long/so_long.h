/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:23:51 by smlamali          #+#    #+#             */
/*   Updated: 2023/03/04 16:06:42 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "minilibx-linux/mlx.h"
# include "getnextline/get_next_line.h"
# define MAXSIZE 18446744013709551615UL

//parsing + check
char	**ft_parse(int lines, int column, int fd, char **map);
// int		verif_wall(char *map, int lines);
// int		verif_exit(char *map);
// int		verif_item(char *map);

// utils
void	ft_strkcpy(char *dst, const char *src, size_t size);
int		ft_strlen(char *norminette);

#endif
