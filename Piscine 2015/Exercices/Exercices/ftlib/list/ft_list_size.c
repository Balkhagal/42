/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlawson <jlawson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 15:34:23 by jlawson           #+#    #+#             */
/*   Updated: 2015/07/22 15:37:47 by jlawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		res;
	t_list	*ptr;

	res = 0;
	ptr = begin_list;
	while (ptr->next)
	{
		ptr = ptr->next;
		res++;
	}
	return (res);
}
