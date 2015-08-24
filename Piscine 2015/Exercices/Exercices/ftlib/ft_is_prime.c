/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlawson <jlawson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 20:01:20 by jlawson           #+#    #+#             */
/*   Updated: 2015/07/14 17:29:22 by jlawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int compar;

	compar = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (compar < nb)
	{
		if (nb % compar == 0)
		{
			return (0);
		}
		else
		{
			compar++;
		}
	}
	return (1);
}
