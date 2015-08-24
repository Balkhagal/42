/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/19 16:52:30 by sda-silv          #+#    #+#             */
/*   Updated: 2015/07/19 21:13:56 by sda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_ctoi(char *c);
bool	ft_valide_grid(int grid[9][9]);
bool	ft_valid_arg(int argc, char **argv);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_itoc(int c);

void	ft_print_grid(int grid[9][9])
{

}

void	ft_generate_grid(char **argv)
{
	int grid[9][9];
	int x;
	int y;
	int real;

	real = 1;
	x = 0;
	y = 0;
	while (y <= 8)
	{
		while (argv[real][x] != '\0')
		{
			grid[y][x] = ft_ctoi(&argv[real][x]);
			x++;
		}
		x = 0;
		y++;
		real++;
	}
	ft_valide_grid(grid);
	ft_print_grid(grid);
}

int		main(int argc, char **argv)
{
	if (ft_valid_arg(argc, argv))
		ft_generate_grid(argv);
	else
		ft_putstr("Erreur\n");
	return (0);
}
