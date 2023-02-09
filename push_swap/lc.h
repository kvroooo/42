/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lc.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:21:22 by smlamali          #+#    #+#             */
/*   Updated: 2023/02/01 14:14:14 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LC_H
# define LC_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	char			*nom;
	struct s_list	*next;
}				t_list;

t_list	*l_add(t_list *list, char *str);
int		ft_strlen(char *s);
void	ft_putstr(char *s);

#endif