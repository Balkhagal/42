/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeglain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/21 11:59:58 by mdeglain          #+#    #+#             */
/*   Updated: 2015/08/21 12:10:50 by mdeglain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	write(1, argv[1], str_len(argv[1]));
	return (0);
}
