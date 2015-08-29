#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		in_string(char *str, char c)
{
	int i;

	i = 0;	
	while (str[i])
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int		first_time(char *str, char c, int len)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			break;
		i++;
	}
	if (i == len)
		return (1);
	return (0);
}

void	inter(char *str, char *str2)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (in_string(str2, str[i]) && first_time(str, str[i], i))
			ft_putchar(str[i])
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{

	}
	ft_putchar('\n');
	return (0);
}