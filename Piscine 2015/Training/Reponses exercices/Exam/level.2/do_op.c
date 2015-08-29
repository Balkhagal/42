#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int		ft_atoi(char *str)
{
	int neg;
	int nb;
	int i;

	i = 0;
	neg = 0;
	nb = 0;
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v' || str[i] == '\n')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		nb = nb * 10;
		nb = nb + (str[i] - 48);
		i++;
	}
	if (neg == 1)
		return (-nb);
	return (nb);
}

int		operation(int nb1, char operateur, int nb2)
{
	int ret;

	ret = 0;
	if (operateur == '+')
		ret = nb1 + nb2;
	else if (operateur == '*')
		ret = nb1 * nb2;
	else if (operateur == '-')
		ret = nb1 - nb2;
	else if (operateur == '/')
		ret = nb1 / nb2;
	else if (operateur == '%')
		ret = nb1 % nb2;
	return (ret);
}

int		main(int argc, char **argv)
{
	int ret;

	if (argc == 4)
	{
		ret = operation(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]));
		ft_putnbr(ret);
	}
	ft_putchar('\n');
	return (0);
}