#include <stdio.h>

int		ft_atoi(char *str)
{
	int nb;
	int i;
	int neg;

	nb = 0;
	neg = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
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

int		main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}