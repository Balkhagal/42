/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 01:18:59 by pmoulin           #+#    #+#             */
/*   Updated: 2015/07/28 05:27:29 by pmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
   int openll (char *argv);

   int 	main(int argc, char *argv)
   {
   int		i;

   i = 0;
   if (argc >= 1)
   {
   while (argv[i])
   {
   openll(argv);
   i++;
   }
   }
   }  */



#include <unistd.h>

#define EMPTY '.'
#define OBSTACLE 'o'
#define FILL 'x'
/* 
 * */
void    ft_putchar(char c)
{   
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void    ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	ft_putchar('0' + nb);
}

int     ft_strlargv(char **tab, int n)
{

	int     i;
	int     j;
	int     t;

	j = 1;       
	t = 10;
	while (j < n)
	{
		i = 0;
		while(tab[j][i])
		{
			i++;
		}
		if (i != t)
			return (1);
		j++;
	}
	return (0);
}

int     ft_verif_parameter(int n, char **tab)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (n != 7)
		return (1);
	while (j < n)
	{
		while (tab[j][i])
		{
			if (tab[j][i] != EMPTY && tab[j][i] != OBSTACLE)
				return (1);
			i++;
		}
		i = 0;
		j++;
	}
	if (ft_strlargv(tab, n) == 1)
		return (1);
	return (0);
}

void    ft_init_grid(int n, char **tab, char grid[6][10])
{
	inti;
	intj;				
	intk;

	j = 1;
	i = 0;
	k = 0;
	while (j < n)
	{
		while (tab[j][i]		)
		{
			grid[k][i] = tab[j][i];
			i++;
		}
		i = 0;
		k++;
		j++;
	}
}

intft_solve(char grid[6][10], int position)
{
	int        i;
	int        j;
	int 								       compt;
	static int      comptmax;
	int             posmax;

	if (position == 6 * 10)
		return (0);
	j = position / 6;
	i = position % 10;
	compt = 0;
	if (grid[j][i] == OBSTACLE)
		return(ft_solve(grid, position + 1));
	while (i != OBSTACLE)
	{
		while (j != OBSTACLE)
		{
			j++;
			compt++;
		}
		i++;
	}
	if (comptmax < compt)
	{
		comptmax = compt;
		posmax = position;
		j = posmax / 6;
		i = posmax % 10;
		grid[j][i] = FILL;
	}
	ft_solve(grid, position + 1);
	return (0);
}

voidft_print_grid(char grid[6][10])
{
	ini;
	intj;

	j = 0;
	while (j < 6)
	{
		i = 0;
		while (i < 10)
		{		
			ft_putchar(grid[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

int 	main(int argc, char **argv)
{
	char grid[6][10]; //tableau fixe

	if (ft_verif_parameter(argc, argv) == 1)
	{
		ft_putstr("Erreur\n");
		return (0);
	}
	ft_init_grid(argc, argv, grid);
	ft_solve(grid, 0);
	ft_print_grid(grid);
	return (0);
}

/*
 * .....o....
 * .........o
 * o.......oo
 * ..........
 * ......o...
 * ...o......
 *
 * ..........
 * .o........
 * .o...o...o
 * .......o..
 * .......o..
 * ..........
 *
 * .......o..
 * ....o.....
 * ..........
 * .o.....o..
 * .o..o.o...
 * o.........
 *
 * */


