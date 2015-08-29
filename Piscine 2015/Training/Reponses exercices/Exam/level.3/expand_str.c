/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeglain <mdeglain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/28 00:07:39 by mdeglain          #+#    #+#             */
/*   Updated: 2015/08/28 00:40:18 by mdeglain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	three_time(char c)
{
	ft_putchar(c);
	ft_putchar(c);
	ft_putchar(c);
}

char	not_a_space(char c)
{
	if (c != ' ' && c != '\t')
		return (1);
	else
		return (0);
}

void	expand_str(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (str[len] == ' ' || str[len] == '\t' || str[len] == '\0')
		len--;
	len++;
	str[len] = '\0';
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			i++;
		else if ((str[i + 1] == ' ' || str[i + 1] == '\t') && not_a_space(str[i]) == 1)
		{
			ft_putchar(str[i]);
			three_time(' ');
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		expand_str(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
