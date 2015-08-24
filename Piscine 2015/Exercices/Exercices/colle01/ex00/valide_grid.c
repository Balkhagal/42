/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valide_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/19 16:56:07 by sda-silv          #+#    #+#             */
/*   Updated: 2015/07/19 21:16:03 by sda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool		ft_check_line(int grid[9][9], int y);
bool		ft_check_colone(int grid[9][9], int x);
bool		ft_check_block(int grid[9][9], int x, int y);
void		ft_putstr(char *str);

bool		ft_valide_line(int grid[9][9])
{
	bool	is_valide;
	int		x;

	is_valide = true;
	x = 0;
	while (x <= 9 && is_valide)
	{
		if (!ft_check_line(grid, x))
		{
			is_valide = false;
		}
		x++;
	}
	return (is_valide);
}

bool		ft_valide_colone(int grid[9][9])
{
	bool	is_valide;
	int		y;

	is_valide = true;
	y = 0;
	while (y <= 9 && is_valide)
	{
		if (!ft_check_colone(grid, y))
		{
			is_valide = false;
		}
		y++;
	}
	return (is_valide);
}

bool		ft_valide_block(int grid[9][9])
{
	bool	is_valide;
	int		x;
	int		y;

	is_valide = true;
	y = 0;
	x = 0;
	while (y <= 6 && is_valide)
	{
		while (x <= 6 && is_valide)
		{
			if (!ft_check_block(grid, x, y))
			{
				is_valide = false;
			}
			x = x + 3;
		}
		x = 0;
		y = y + 3;
	}
	return (is_valide);
}

void		ft_valide_grid(int grid[9][9])
{
	bool is_valide;

	is_valide = true;
	if (!ft_valide_line(grid))
		is_valide = false;
	else if (!ft_valide_colone(grid) && is_valide)
		is_valide = false;
	else if (!ft_valide_block(grid) && is_valide)
		is_valide = false;
	if (is_valide)
		ft_print_grid(grid);
	else
		ft_putstr("Erreur\n");
}
