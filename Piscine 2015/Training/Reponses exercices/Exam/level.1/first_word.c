/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeglain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 00:11:33 by mdeglain          #+#    #+#             */
/*   Updated: 2015/08/25 00:41:17 by mdeglain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_first_word(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check(int argc, char *str)
{
	int i;

	i = 0;
	if (argc < 2 || str[i] == '\0')
	{
		ft_putchar('\n');
		return (0);
	}
	else
		aff_first_word(str);
	return (1);
}

void	aff_first_word(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != ' ' && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	check(argc, argv[1]);
	return(0);
}
