#include <stdio.h>

char    *ft_strrev(char *str)
{
	int i;
	int j;
	char tempo[999];

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

int main(void)
{
	char salut[] = "Maxence";
	printf("%s\n", ft_strrev(salut));
	return (0);
}