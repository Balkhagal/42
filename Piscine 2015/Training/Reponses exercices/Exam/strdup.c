/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeglain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/21 14:50:37 by mdeglain          #+#    #+#             */
/*   Updated: 2015/08/21 14:58:05 by mdeglain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *str)
{
	int i;
	char *duplicate;
	int size;

	i = 0;
	size = 0;
	while (str[size])
		size++;
	duplicate = (char*)malloc(sizeof(*duplicate) * size);
	while (str[i])
	{
		str[i] = duplicate[i];
		i++;
	}
	duplicate[size] = '\0';
	return (duplicate);
}
