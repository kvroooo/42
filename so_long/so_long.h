/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:23:51 by smlamali          #+#    #+#             */
/*   Updated: 2023/03/11 17:10:21 by smlamali         ###   ########.fr       */
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
char	**ft_zero(char **map, int column, int lines);
void	ft_strkcpy(char *dst, const char *src, size_t size);
int		ft_strlen(char *norminette);
int		ft_lines(char **map);
int		ft_column(char **map);

//CHECK_MAP & UTILS
void	ft_check(char **map, int lines, int collumn);
int		ft_walls(char **map, int lines, int collumn);
int		ft_search(char **map, int lines, int collumn, char caracter);
int		ft_contain(char **map, int lines, int collumn);

#endif
