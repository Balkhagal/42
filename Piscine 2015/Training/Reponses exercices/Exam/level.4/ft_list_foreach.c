/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeglain <mdeglain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 15:43:54 by mdeglain          #+#    #+#             */
/*   Updated: 2015/08/28 15:56:13 by mdeglain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list;

	list = begin_list;
	while (list->next)
	{
		(*f)(list->data);
		list = list->next;
	}
}
