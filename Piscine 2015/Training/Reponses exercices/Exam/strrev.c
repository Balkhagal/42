/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeglain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/22 18:34:46 by mdeglain          #+#    #+#             */
/*   Updated: 2015/08/22 18:46:20 by mdeglain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char tempo[ft_strlen(str)];

	i = 0;
	while (str[i])
	{
		tempo[i] = str[i];
		i++;
	}
	j = 0;
	i--;
	while (str[i])
	{
		str[j++] = tempo[i--];
	}
	return (str);
}

int main(void)
{
	char str[] = "Maxence";
	printf("%s\n", ft_strrev(str));
	return (0);
}
