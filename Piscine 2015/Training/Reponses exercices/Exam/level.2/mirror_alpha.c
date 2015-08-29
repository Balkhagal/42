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

char	change(char str)
{
	str = str - 'a';
	str = 'z' - str;
	return (str);
}

int main(int argc, char **argv)
{
	 int i;
	char *str;

	str = argv[1];
	i = 0;
	if (argc == 2)
	{
		while (str[i])
		{
			str[i] = change(str[i]);
			i++;
		}
		ft_putstr(str);
	}
	ft_putchar('\n');
	return (0);
}