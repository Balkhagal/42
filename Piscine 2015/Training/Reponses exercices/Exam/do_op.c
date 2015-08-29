/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeglain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 16:30:27 by mdeglain          #+#    #+#             */
/*   Updated: 2015/08/24 18:11:51 by mdeglain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
}

int	calcul(int a, char op, int b)
{
	int res;

	res = 0;
	if (op == '+')
		res = a + b;
	else if (op == '-')
		res = a + b;
	else if (op == '*')
		res = a *b;
	else if (op == '%')
		res = a % b;
	else if (op == '/')
		res = a / b;
	else
		return (0);
	return (res);
}

int	ft_atoi(char *str)
{
	int neg;
	int nb;
	int i;

	i = 0;
	neg = 0;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + (str[i] - '0');
		i++;
	}
	if (neg == 1)
		return (-nb);
	return (nb);
}

int main(int argc, char **argv)
{
	ft_putnbr(calcul(ft_atoi(argv[1], argv[2], ft_atoi(argv[3])));
	return (0);
}
