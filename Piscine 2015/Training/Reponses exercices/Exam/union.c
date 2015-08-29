/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeglain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 18:41:17 by mdeglain          #+#    #+#             */
/*   Updated: 2015/08/23 20:35:28 by mdeglain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcat(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	str[i++] = c;
	str[i] = '\0';
	return (str);
}


int		ft_strchr(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_union(char *s1, char *s2)
{
	char match[500];

	while (*s1)
	{
		if (!(ft_strchr(match, *s1)))
			ft_strcat(match, *s1);
		s1++;
	}
	while (*s2)
	{
		if(!(ft_strchr(match, *s2)))
			ft_strcat(match, *s2);
		s2++;
	}
	ft_putstr(match);

}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
