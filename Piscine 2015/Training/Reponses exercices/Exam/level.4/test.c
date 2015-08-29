#include <stdlib.h>
#include <stdio.h>

int ft_tablen(int nb)
{
	int i;

	i = 0;
	if (n < 0)
		i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int nbr)
{
	char *r;
	int l;
	int s;

	s = 0;
	l = ft_tablen(n);
	r = (char*)malloc(sizeof(r) * (l + 1));
	if (!r)
		return (NULL);
	if (n < 0)
		s = 1;
	if (n > 0)

}

int main(void)
{
		printf("%s\n", ft_itoa(55));
		return (0);
}
