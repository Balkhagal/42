/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argument.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/19 21:09:20 by sda-silv          #+#    #+#             */
/*   Updated: 2015/07/19 21:11:30 by sda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool		ft_check_arg(char **argv, int index)
{
	bool	is_valide;
	int		count;

	is_valide = true;
	count = 0;
	while (argv[index][count] != '\0' && is_valide)
	{
		if (count > 8)
			is_valide = false;
		count++;
	}
	if (count < 9)
		is_valide = false;
	return (is_valide);
}

bool		ft_valid_arg(int argc, char **argv)
{
	int		index;
	bool	is_valide;

	index = 1;
	is_valide = true;
	if (argc == 10)
	{
		while (index < 10 && is_valide)
		{
			if (!ft_check_arg(argv, index))
				is_valide = false;
			index++;
		}
	}
	else
		is_valide = false;
	return (is_valide);
}
