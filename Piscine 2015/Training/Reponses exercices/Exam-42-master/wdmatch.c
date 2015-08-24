/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrancha <ntrancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/08 15:37:54 by ntrancha          #+#    #+#             */
/*   Updated: 2015/03/08 15:37:54 by ntrancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			wdmatch(char *str, char *str2)
{
	while (*str)
	{
		while (*str2 && *str2 != *str)
			str2++;
		if (*str2 != *str)
			return (0);
		str++;
	}
	return (1);
}

int			main(int argc, char **argv)
{
	if (argc == 3)
		if (wdmatch(argv[1], argv[2]))
			while (*argv[1])
				write(1, argv[1]++, 1);
	write(1, "\n", 1);
	return (0);
}
