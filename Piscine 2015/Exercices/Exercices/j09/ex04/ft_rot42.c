/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 11:02:27 by pmoulin           #+#    #+#             */
/*   Updated: 2015/07/17 13:51:00 by pmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 107)
		{
			str[i] = (str[i] + 26 - 10);
			i++;
		}
		if (str[i] >= 97 && str[i] < 107)
		{
			str[i] = (str[i] - 26 + 10);
			i++;
		}
		else
			i++;
	}
	return (str);
}