/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlawson <jlawson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/14 10:04:00 by jlawson           #+#    #+#             */
/*   Updated: 2015/07/15 14:06:42 by jlawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	int				test;

	i = 0;
	while (str[i])
	{
		j = 0;
		test = 1;
		while (test && to_find[j])
		{
			if (str[i + j] && to_find[j] == str[i + j])
				j++;
			else
				test = 0;
		}
		if (!to_find[j])
			return (str + i);
		i++;
	}
	return (0);
}
