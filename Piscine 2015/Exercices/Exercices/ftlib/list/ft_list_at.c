/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlawson <jlawson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 16:29:34 by jlawson           #+#    #+#             */
/*   Updated: 2015/07/23 20:41:22 by jlawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int res;

	res = 1;
	while (begin_list && res < nbr)
	{
		begin_list = begin_list->next;
		res++;
	}
	if (res == nbr)
		return (begin_list);
	return (0);
}
