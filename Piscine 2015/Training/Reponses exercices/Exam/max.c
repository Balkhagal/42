/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeglain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 16:35:50 by mdeglain          #+#    #+#             */
/*   Updated: 2015/08/23 16:37:45 by mdeglain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(char *tab, unsigned int nb)
{
	int i;
	int bigger;

	i = 0;
	bigger = 0;
	while (tab[i])
	{
		if (tab[i] > bigger)
			bigger = tab[i];
		i++;
	}
	return (bigger);
}
