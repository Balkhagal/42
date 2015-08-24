/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlawson <jlawson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/11 22:47:40 by jlawson           #+#    #+#             */
/*   Updated: 2015/07/15 16:51:14 by jlawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int min;

	j = 0;
	while (j < size - 1)
	{
		min = j;
		i = j + 1;
		while (i < size)
		{
			if (tab[i] < tab[min])
			{
				min = i;
			}
			i++;
		}
		if (min != j)
		{
			ft_swap((tab + j), (tab + min));
		}
		j++;
	}
}
