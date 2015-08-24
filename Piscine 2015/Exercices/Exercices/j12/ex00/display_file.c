/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/23 15:42:59 by pmoulin           #+#    #+#             */
/*   Updated: 2015/07/24 22:29:44 by pmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		file(int fd)
{
	char	buffer;

	while (read(fd, &buffer, 1) != 0);
			
	write(1, &buffer, 1);
}

int		main(int argv, char **argc)
{
	int		fd;

	if (argc != 2)
	{
		if (argc > 2)
			write(2,"too many arguments.\n", 20);
		if (argc < 2)
			write(2, "file name missing \n", 19);
		return (1);

	}
	fd = open(argv[1], O_RDONLY);
	disp_file(fd);
	close(fd);
	return (0);
}
