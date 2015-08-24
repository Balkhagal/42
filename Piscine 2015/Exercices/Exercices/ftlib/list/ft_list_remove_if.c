/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlawson <jlawson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/23 22:52:52 by jlawson           #+#    #+#             */
/*   Updated: 2015/07/23 23:12:52 by jlawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *prev;
	t_list *cur;
	t_list *next;

	cur = *begin_list;
	next = cur->next;
	if (cmp((*begin_list)->data, data_ref) == 0)
	{
		free(cur);
		*begin_list = next;
	}
	prev = cur;
	else
	{
		while (cur)
		{
			if (cmp(cur->data, data_ref) == 0)
			{
				free_element(cur);
				prev->next = next;
			}
			cur = cur->next;
		}
	}
}

void free_element(t_list *element)
{
	free(element->data);
	free(element);
}
