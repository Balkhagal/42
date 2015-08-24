/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlawson <jlawson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 16:14:47 by jlawson           #+#    #+#             */
/*   Updated: 2015/07/23 20:40:43 by jlawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *ptr;
	t_list *next;

	ptr = *begin_list;
	next = ptr->next;
	while (next)
	{
		free(ptr);
		ptr = next;
		next = next->next;
	}
	free(ptr);
	*begin_list = 0;
}
