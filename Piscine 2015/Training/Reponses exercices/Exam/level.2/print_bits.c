#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

void    print_bits(unsigned char octet)
{
	int i;
	int tab[8];

	i = 0;
	while (i != 8)
	{
		if (octet > 0)
			tab[i] = octet % 2;
		else
			tab[i] = 0;
		octet = octet / 2;
		i++;
	}
	i = 7;
	while (i >= 0)
	{
		ft_putnbr(tab[i]);
		i--;
	}
}

int		main(void)
{
	print_bits(2);
	return (0);
}
