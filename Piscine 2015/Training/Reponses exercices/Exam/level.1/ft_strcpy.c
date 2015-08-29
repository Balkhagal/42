#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(int argc, char **argv)
{
	printf("%s\n", ft_strcpy(argv[1], argv[2]));
	return (0);
}