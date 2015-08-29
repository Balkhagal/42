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
		ft_putchar(str[i++]);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char tempo[ft_strlen(str)];

	i = 0;
	while (str[i])
	{
		tempo[i] = str[i];
		i++;
	}
	i--;
	j = 0;
	while (i >= 0)
	{
		str[j] = tempo[i];
		i--;
		j++;
	}
	return (str);
}

void	last_word(char *str)
{
	int i;
	int j;
	char tab[100];

	i = 0;
	j = 0;
	ft_strrev(str);
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	i++;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		tab[j] = str[i];
		i++;
		j++;
		ft_putchar(tab[i]);
		ft_putchar('\n');
	}

}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}

//"    coucou c\'est 	encore   	nous		 \0"