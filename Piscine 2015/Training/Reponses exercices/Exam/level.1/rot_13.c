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

char	ft_uppercase(char str)
{
	str = str - 'A';
	str = (str + 13) % 26;
	str = str + 'A';
	return(str);
}

char	ft_lowercase(char str)
{
	str = str - 'a';
	str = ((str + 13) % 26);
	str = str + 'a';
	return (str);
}

char	rotone(char str)
{
	if (str >= 'a' && str <= 'z')
		return(ft_lowercase(str));
	else if (str >= 'A' && str <= 'Z')
		return(ft_uppercase(str));
	return (str);
}

int		main(int argc, char **argv)
{
	int i;
	char *str;

	str = argv[1];
	i = 0;
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