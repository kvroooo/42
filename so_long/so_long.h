/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:23:51 by smlamali          #+#    #+#             */
/*   Updated: 2023/03/06 15:59:22 by smlamali         ###   ########.fr       */
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

//PARSING & UTILS
char	**ft_parse(int lines, int column, int fd, char **map);
char	**lcolumn_to_zero(char **map, int lines, int column);
void	ft_strkcpy(char *dst, const char *src, size_t size);
int		ft_strlen(char *norminette);
int		ft_lines(char **map);
int		ft_column(char **map, int lines);

//CHECK_MAP & UTILS
void	ft_check(char **map, int lines, int collumn);
int		ft_walls(char **map, int lines, int collumn);

#endif
