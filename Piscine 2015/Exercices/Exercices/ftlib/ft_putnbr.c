/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlawson <jlawson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 16:27:09 by jlawson           #+#    #+#             */
/*   Updated: 2015/07/15 17:23:16 by jlawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

void	ft_putnbr(int nb)
{

	if (nb < 0)
	{
		ft_putchar('-');
		nb = - nb;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_err_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_err_putchar('-');
		nb = - nb;
	}
	else if (nb < 10)
	{
		ft_err_putchar(nb + '0');
	}
	else
	{
		ft_err_putnbr(nb / 10);
		ft_err_putnbr(nb % 10);
	}
}
