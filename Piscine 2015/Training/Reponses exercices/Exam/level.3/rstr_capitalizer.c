/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeglain <mdeglain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 22:36:11 by mdeglain          #+#    #+#             */
/*   Updated: 2015/08/27 23:45:16 by mdeglain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_min(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int		is_maj(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}

void	rstr_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0') && is_maj(str[i]) == 1)
			ft_putchar(str[i]);
		else if ((str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0') && is_min(str[i]) == 1)
			ft_putchar(str[i] - 'a' + 'A');
		else if (is_maj(str[i]) == 1 && str[i + 1] != ' ')
			ft_putchar(str[i] - 'A' + 'a');
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while(i < argc)
		{
			rstr_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
