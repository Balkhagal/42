/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlawson <jlawson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 15:53:21 by jlawson           #+#    #+#             */
/*   Updated: 2015/07/15 16:47:28 by jlawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_power(int nb, int power)
{
	int res;

	if (power == 0)
		res = 1;
	else if (power == 1)
		res = nb;
	else
		res = nb * ft_power(nb, power - 1);
	return (res);
}
