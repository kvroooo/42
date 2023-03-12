/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:24:56 by smlamali          #+#    #+#             */
/*   Updated: 2023/03/11 16:18:50 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_zero(char **map, int column, int lines)
{
	map[lines] = '\0';
	return (map);
}

int	ft_lines(char **map)
{		
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

int	ft_column(char **map)
{
	int	c;

	c = 0;
	while (map[0][c])
		c++;
	return (c);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != '\n')
		i++;
	return (i);
}

void	ft_strkcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && (size > 0 && i < size))
	{
		dst[i] = src[i];
		i++;
	}
}
