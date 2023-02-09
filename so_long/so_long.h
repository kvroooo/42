/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:23:51 by smlamali          #+#    #+#             */
/*   Updated: 2023/02/09 13:23:53 by smlamali         ###   ########.fr       */
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

//parsing
int		ft_parse(char *map, int lines);
int		verif_wall(char *map, int lines);
int		verif_exit(char *map);
int		verif_item(char *map);

#endif
