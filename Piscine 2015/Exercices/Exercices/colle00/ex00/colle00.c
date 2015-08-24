/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfafourn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/12 11:14:55 by lfafourn          #+#    #+#             */
/*   Updated: 2015/07/12 18:27:07 by amathias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_display(int x, int y, int column, int line)
{
	char o;
	char tirh;
	char tirv;

	o = 'o';
	tirh = '-';
	tirv = '|';
	if ((column == 1 && line == 1) || (column == x && line == 1))
		ft_putchar(o);
	else if ((column == 1 && line == y) || (column == x && line == y))
		ft_putchar(o);
	else if (line == y || line == 1)
		ft_putchar(tirh);
	else if (column == 1 || column == x)
		ft_putchar(tirv);
	else
		ft_putchar(' ');
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
