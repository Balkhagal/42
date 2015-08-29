#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *str)
{
	int i;
	int len;
	char *str2;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	str2 = (char*)malloc(sizeof(char) * (len + 1));
	while (str[i])
	{
		str2[i] = str[i];
		i++;
	}
	return (str2);
}

int		main(int argc, char **argv)
{
	printf("%s\n", ft_strdup(argv[1]));
	return (0);
}