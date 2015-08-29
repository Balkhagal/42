#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
		ft_putchar(str[i++]);
}

void	wdtmatch(char *str, char *str2)
{
	int i;
	int j;
	int len;
	int count;

	i = 0;
	j = 0;
	len = 0;
	count = 0;
	while (str[len])
		len++;
	while (str[i])
	{
		while (str2[j])
		{
			if (str[i] == str2[j])
				{
					count++;
					i++;
				}
			j++;
		}
		i++;
	}
	if (len == count)
	{
		ft_putstr(str);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		wdtmatch(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return (0);
}