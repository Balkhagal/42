/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfafourn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/12 18:34:40 by lfafourn          #+#    #+#             */
/*   Updated: 2015/07/12 19:13:47 by lfafourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_display(int x, int y, int column, int line)
{
	char ca;
	char cb;
	char cc;

	ca = 'A';
	cb = 'B';
	cc = 'C';
	if ((column == 1 && line == 1) || (column == x && line == 1))
		ft_putchar(ca);
	else if ((column == 1 && line == y) || (column == x && line == y))
		ft_putchar(cc);
	else if (line == 1 || line == y || column == 1 || column == y)
		ft_putchar(cb);
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
