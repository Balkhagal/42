/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/19 16:42:01 by sda-silv          #+#    #+#             */
/*   Updated: 2015/07/19 16:49:02 by sda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int			ft_check_number_line(int grid[9][9], int y, int number);
int			ft_check_number_colone(int grid[9][9], int y, int number);
int			ft_check_number_block(int grid[9][9], int x, int y, int number);

bool		ft_check_line(int grid[9][9], int x)
{
	int		number;
	bool	is_valide;

	number = 1;
	is_valide = true;
	while (number <= 9 && is_valide)
	{
		if (ft_check_number_line(grid, x, number) > 1)
			is_valide = false;
		number++;
	}
	return (is_valide);
}

bool		ft_check_colone(int grid[9][9], int y)
{
	int		number;
	bool	is_valide;

	number = 1;
	is_valide = true;
	while (number <= 9 && is_valide)
	{
		if (ft_check_number_colone(grid, y, number) > 1)
			is_valide = false;
		number++;
	}
	return (is_valide);
}

bool		ft_check_block(int grid[9][9], int x, int y)
{
	int		number;
	bool	is_valide;

	number = 1;
	is_valide = true;
	while (number <= 9 && is_valide)
	{
		if (ft_check_number_block(grid, x, y, number) > 1)
			is_valide = false;
		number++;
	}
	return (is_valide);
}
