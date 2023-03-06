/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:24:56 by smlamali          #+#    #+#             */
/*   Updated: 2023/03/06 16:50:37 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_lines(char **map)
{		
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

int	ft_column(char **map, int lines)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (map[0][c])
		c++;
	while (i < lines)
	{
		if (map[i][c - 1] == '\n')
			map[i][c - 1] = '\0';
		i++;
	}
	return (c - 1);
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
