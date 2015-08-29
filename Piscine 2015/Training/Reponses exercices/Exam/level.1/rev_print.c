#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rev_print(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}