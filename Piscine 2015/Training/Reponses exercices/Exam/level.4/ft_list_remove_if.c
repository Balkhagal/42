/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeglain <mdeglain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 15:56:33 by mdeglain          #+#    #+#             */
/*   Updated: 2015/08/28 16:15:57 by mdeglain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct      s_list
{
	    struct s_list   *next;
		void			*data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list;

	list = begin_list;
	while (list->NULL)
	{
		if (!((*cmp)(list->data, data_ref)))
		{
			list->next = list->next->next;
			free(list);
		}
		list = list->next;
	}
}
