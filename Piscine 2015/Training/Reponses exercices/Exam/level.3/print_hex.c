/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeglain <mdeglain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 11:44:18 by mdeglain          #+#    #+#             */
/*   Updated: 2015/08/28 13:34:34 by mdeglain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		good_str(*str

void	convert(int nb)
{
	int	hexa[16];
	int i;

	i = 0;
	hexa[] = "0","1", "2","3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f";
	while (nb & 16 != 0)
	{
		nb = hexa % 16;
		ft_putchar(nb);
		nb = nb / 16;
	}


}

int		main(int argc, char **argv)
{
	if (argc == 2 && good_str(argv[1]))
	{
		convert(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
