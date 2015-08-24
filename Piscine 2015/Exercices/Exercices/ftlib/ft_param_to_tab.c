/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlawson <jlawson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/20 17:24:52 by jlawson           #+#    #+#             */
/*   Updated: 2015/07/21 22:34:14 by jlawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char				*ft_strcpy(char *dest, char *src)
{
	char *res;

	res = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = 0;
	return (res);
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src, int size)
{
	char *res;

	res = malloc(size + 1);
	if (res)
		res = ft_strcpy(res, src);
	return (res);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*res;
	int			i;

	res = NULL;
	res = malloc((ac + 1) * sizeof(struct s_stock_par));
	if (res)
	{
		i = 0;
		while (i < ac)
		{
			res[i].size_param = ft_strlen(av[i]);
			res[i].str = av[i];
			res[i].copy = ft_strdup(av[i], res[i].size_param);
			res[i].tab = 0;
			res[i].tab = ft_split_whitespaces(av[i]);
			i++;
		}
		res[i].str = 0;
	}
	return (res);
}
