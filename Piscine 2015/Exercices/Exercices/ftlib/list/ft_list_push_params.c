/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlawson <jlawson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 15:44:02 by jlawson           #+#    #+#             */
/*   Updated: 2015/07/23 23:26:26 by jlawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*begin_list;
	int		i;

	if (ac > 0)
	{
		begin_list = ft_create_elem(av[0]);
		i = 1;
		while (i < ac - 1)
		{
			ft_list_push_front(&begin_list, av[i]);
			i++;
		}
	}
	return (begin_list);
}
