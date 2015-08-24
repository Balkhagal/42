/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amathias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/12 19:24:00 by amathias          #+#    #+#             */
/*   Updated: 2015/07/12 19:24:07 by amathias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_display(int x, int y, int column, int line)
{
	char a;
	char b;
	char c;

	a = 'A';
	b = 'B';
	c = 'C';
	if (column == 1 && line == 1)
		ft_putchar(a);
	else if (column == x && line == 1)
		ft_putchar(c);
	else if (column == 1 && line == y)
		ft_putchar(c);
	else if (column == x && line == y)
		ft_putchar(a);
	else if (!(column == 1 || line == 1 || column == x || line == y))
		ft_putchar(' ');
	else
		ft_putchar(b);
	return (0);
}

void	colle(int x, int y)
{
	int column;
	int line;

	column = 1;
	line = 1;
	if (x >= 0 && y >= 0)
	{
		while (line <= y)
		{
			while (column <= x)
			{
				ft_display(x, y, column, line);
				column++;
			}
			column = 1;
			ft_putchar('\n');
			line++;
		}
	}
}
