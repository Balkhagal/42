/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrancha <ntrancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/08 15:27:00 by ntrancha          #+#    #+#             */
/*   Updated: 2015/03/08 15:27:00 by ntrancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	if (argc == 2)
		while (*argv[1])
		{
			if (*argv[1] >= 'A' && *argv[1] <= 'Z')
				*argv[1] += 'a' - 'A';
			else if (*argv[1] >= 'a' && *argv[1] <= 'z')
				*argv[1] -= 'a' - 'A';
			write(1, argv[1]++, 1);
		}
	write(1, "\n", 1);
	return (0);
}