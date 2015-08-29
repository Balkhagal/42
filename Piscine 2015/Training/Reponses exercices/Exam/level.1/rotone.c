#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	rotone(char str)
{
	if (str <= 'y' && str >= 'a')
		str = str + 1;
	else if (str == 'z')
		str = 'a';
	else if (str <= 'Y' && str >= 'A')
		str = str + 1;
	else if (str == 'Z')
		str = 'A';
	return (str);
}

int		main(int argc, char **argv)
{
	int i;
	char *str;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i])
		{
			str[i] = rotone(str[i]);
			i++;
		}
		ft_putstr(str);
	}
	ft_putchar('\n');
	return (0);
}