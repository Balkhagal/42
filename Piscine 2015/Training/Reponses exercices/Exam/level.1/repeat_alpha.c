#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	char *str;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				j = str[i] - 'a';
			else if (str[i] >= 'A' && str[i] <= 'Z')
				j = str[i] - 'A';
			j++;
			while (j > 0)
			{
				ft_putchar(str[i]);
				j--;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}