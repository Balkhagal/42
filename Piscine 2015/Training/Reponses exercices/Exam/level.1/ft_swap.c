int		ft_swap(int first, int second)
{
	int tempo;

	tempo = first;
	first = second;
	second = tempo;

}

int		main(void)
{
	printf("%d\n", ft_swap(5, 10));
	return (0);
}