/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeglain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/20 19:57:14 by mdeglain          #+#    #+#             */
/*   Updated: 2015/08/20 23:11:44 by mdeglain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	 while (str)
		write(1, str++, 1);
}

void		cat(char *fn)
{
	int		nb;
	int		fd;
	char	*buffer;

	fd = open(fn, O_RDONLY);
	buffer = (char *) malloc(sizeof(char) * 10);
	while ((nb = read(fd, buffer, 10)) > 0)
		write(1, buffer, nb);
	if (nb == (-1))
	{
		ft_putstr("cat: ");
		ft_putstr(fn);
		ft_putstr(": Operation not permitted\n");
	}
	close(fd);
}

void		cat_alone()
{
	char	buffer[10];
	int		nb;

	while ((nb = read(0, buffer, 10)) > 0)
		write (1, buffer, nb);
}

int			main(int ac, char **argv)
{
	if (ac < 2)
		cat_alone();
	else
	{
		ac--;
		argv++;
		while (ac > 0)
		{
			if (*argv[0] == '-')
				cat_alone();
			else
				cat(*argv++);
			ac--;
		}
	}
	return (0);
}
