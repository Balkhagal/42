/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeglain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/20 13:03:39 by mdeglain          #+#    #+#             */
/*   Updated: 2015/08/20 16:18:20 by mdeglain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
void		ft_display(int fd)
{
	char	buffer;

	while (read(fd, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
	{
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		else
			write(2, "File name missing.\n", 19);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	ft_display(fd);
	close(fd);
	return (0);
}
