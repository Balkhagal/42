/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeglain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 21:17:14 by mdeglain          #+#    #+#             */
/*   Updated: 2015/08/25 21:30:20 by mdeglain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*replace(char *str, char *c, char *l)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c[0])
			str[i] = l[0];
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		printf("%s\n", replace(argv[1], argv[2], argv[3]));
	return (0);
}
