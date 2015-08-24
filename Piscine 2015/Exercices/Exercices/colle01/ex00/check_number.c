/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/19 16:54:31 by sda-silv          #+#    #+#             */
/*   Updated: 2015/07/19 21:12:44 by sda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_check_number_line(int grid[9][9], int y, int number)
{
	int x;
	int count;

	x = 0;
	count = 0;
	while (x < 9)
	{
		if (grid[y][x] == number)
			count++;
		x++;
	}
	return (count);
}

int		ft_check_number_colone(int grid[9][9], int x, int number)
{
	int y;
	int count;

	y = 0;
	count = 0;
	while (y < 9)
	{
		if (grid[y][x] == number)
			count++;
		y++;
	}
	return (count);
}

int		ft_check_number_block(int grid[9][9], int x, int y, int number)
{
	int index_x;
	int index_y;
	int count;

	count = 0;
	index_x = 0;
	index_y = 0;
	while (index_y <= 2)
	{
		while (index_x <= 2)
		{
			if (grid[y + index_y][x + index_x] == number)
				count++;
			index_x++;
		}
		index_x = 0;
		index_y++;
	}
	return (count);
}
