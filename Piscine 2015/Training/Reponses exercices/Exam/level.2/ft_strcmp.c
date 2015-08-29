#include <stdio.h>

int		ft_strcmp(char *str, char *str2)
{
	int i;

	i = 0;
	while ((str[i] == str2[i]) && (str[i] != '\0' && str[i] != '\0'))
		i++;
	return (str[i] - str2[i]);
}

int		main(int argc, char **argv)
{
	printf("%d\n",ft_strcmp(argv[1], argv[2]));
	return (0);
}