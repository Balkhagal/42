/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfafourn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/11 12:19:22 by lfafourn          #+#    #+#             */
/*   Updated: 2015/07/12 18:29:05 by amathias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_display(int x, int y, int column, int line)
{
	char slash;
	char back_slash;
	char star;

	slash = '/';
	back_slash = 92;
	star = '*';
	if (column == 1 && line == 1)
		ft_putchar(slash);
	else if (column == x && line == 1)
		ft_putchar(back_slash);
	else if (column == 1 && line == y)
		ft_putchar(back_slash);
	else if (column == x && line == y)
		ft_putchar(slash);
	else if (!(column == 1 || line == 1 || column == x || line == y))
		ft_putchar(' ');
	else
		ft_putchar(star);
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
