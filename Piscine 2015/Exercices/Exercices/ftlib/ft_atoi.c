/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlawson <jlawson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 20:20:10 by jlawson           #+#    #+#             */
/*   Updated: 2015/07/28 20:30:39 by jlawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_digits(char *str)
{
	int i;

	i = (str[0] == '-') ? 1 : 0;
	while (str[i] <= '9' && str[i] >= '0')
		i++;
	return (i);
}

int	ft_power(int i, int exp)
{
	if (exp < 0)
		return (0);
	if (exp == 0)
		return (1);
	return (i * ft_power(i, exp - 1));
}

int	ft_atoi(char *str)
{
	int i;
	int neg_pos;
	int digits;
	int result;

	result = 0;
	i = 0;
	digits = count_digits(str);
	digits = (str[0] == '-') ? digits - 1 : digits;
	neg_pos = (str[0] == '-') ? -1 : 1;
	str = (neg_pos == 1) ? str : str + 1;
	while (i < digits)
	{
		result += (str[i] - 48) * ft_power(10, digits - i - 1);
		i++;
	}
	return (result * neg_pos);
}
