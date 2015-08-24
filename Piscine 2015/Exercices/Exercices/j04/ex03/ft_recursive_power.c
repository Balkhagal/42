/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/14 13:58:03 by pmoulin           #+#    #+#             */
/*   Updated: 2015/07/14 22:47:36 by pmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	int result;

	if (power < 0 || nb < 0)
		return (0);
	else if (power == 1)
		return (1);
	else if (power <= 1)
		return (1);
	else
	{
		result = nb * nb;
		return (result = nb * ft_recursive_power(nb, power - 1));
	}
}
