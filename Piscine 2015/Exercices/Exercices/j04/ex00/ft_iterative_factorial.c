/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 09:54:42 by pmoulin           #+#    #+#             */
/*   Updated: 2015/07/14 13:56:36 by pmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int		i;
	int		d;

	i = 2;
	d = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else if (nb >= 13)
		return (0);
	else
	{
		while (i <= nb)
		{
			d = d * i;
			i++;
		}
	}
	nb = d;
	return (nb);
}
