int		max(int* tab, unsigned int len)
{
	unsigned int i;
	int bigger;

	i = 0;
	bigger = 0;
	while(len > i)
	{
		if (tab[i] > bigger)
			bigger = tab[i];
		i++;
	}
	return (bigger);
}