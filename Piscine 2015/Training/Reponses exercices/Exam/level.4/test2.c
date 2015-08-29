#include <stdlib.h>
#include <stdio.h>

int	len(int n)
{
	int	l;

	l = 0;
	if (n < 0)
		l = 1;
	while (n /= 10)
		l++;
	return (l);
}

char*	ft_itoa(int n)
{
	char*   r;
	int	    l;
	int		s;

	s = 0;
	l = len(n);
	r = (char*)malloc(sizeof(r) * (l + 1));
	if (!r)
		return (NULL);
	if (n < 0)
		s = 1;
	if (n > 0)
		n = - n;
	while (l > 0)
	{
		r[l--] = '0' - (n % 10);
		n = n / 10;
	}
	if (s)
		r[l] = '-';
	else
		r[l] = '0' - n;
	return (r);
}

int main(void)
{
	printf("%s\n", ft_itoa(500));
	return (0);
}
