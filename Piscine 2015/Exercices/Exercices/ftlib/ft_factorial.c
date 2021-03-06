/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlawson <jlawson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 15:54:43 by jlawson           #+#    #+#             */
/*   Updated: 2015/07/15 16:53:19 by jlawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_factorial(int nb)
{
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 2 || nb == 1)
		return (nb);
	if (nb == 0)
		return (1);
	return (nb * ft_factorial(nb - 1));
}
