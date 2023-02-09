/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lc.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:21:10 by smlamali          #+#    #+#             */
/*   Updated: 2023/02/01 15:04:59 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lc.h"

/* fonction : ajout a la liste*/
t_list	*l_add(t_list *list, char *str)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->nom = str;
		tmp->next = list;
	}
	return (tmp);
}

/* fonction : affiche liste */
void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->nom);
		list = list->next;
	}
}

int	main(void)
{
	t_list	*list;

	list = NULL;
	list = l_add(list, "puro\n");
	list = l_add(list, "pam\n");
	list = l_add(list, "patsu\n");
	// print_list("%d", ft_lstsize(t_list *list));
}
