/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_maxlenoc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrancha <ntrancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/05 21:14:43 by ntrancha          #+#    #+#             */
/*   Updated: 2015/03/05 21:14:43 by ntrancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdlib.h"

void		ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int			maxi(char *str, char *str2)						// Retour la longeur de la sous chaine commune
{
	int		count;

	count = 0;
	while (*str && str2[count] && *str++ == str2[count])	// Parcours str & str2 tant qu'ils sont identiques
			count++;
	return (count);
}

char		*cpy(char *str, int size)						// Copy les SIZE premiers carateres
{
	int		index;
	char	*ret;

	index = 0;
	ret = malloc(sizeof(char) * size + 1);
	while (*str && size-- > 0)
		ret[index++] = *str++;
	ret[index] = '\0';
	return (ret);
}

char		*find(char *str, char *str2)					// Parcours les deux chaines
{
	char 	*ret;
	int		count;
	int 	max;

	max = 0;
	ret = NULL;
	while (*str)
	{
		count = -1;
		while (str2[++count])
			if (maxi(str, &str2[count]) > max)				// Si la sous chaine est plus grande que MAX
			{
				max = maxi(str, &str2[count]);				// MAX deviens la longueur de la sous chaine
				if (ret)
					free(ret);
				ret = cpy(&str2[count], max);				// On copie la sous chaine dans RET
			}
		*str++;
	}
	return (ret);
}

int			strmaxlone(char **argv, int argc)
{
	char	*tmp;
	char	*ret;
	int		count;

	ret = find(argv[1], argv[2]);							// On recupere la plus grande  sous chaine commune
	if (!ret)
		return (-1);
	count = 3;
	while (count < argc)									// On parcours les arguments suivants
	{
		tmp = find(ret, argv[count++]);						// On test un argument et la precedente sous chaine
		if (!tmp)
			return (-1);
		free(ret);
		ret = tmp;											// On remplace l'ancienne sous chaine par la new
	}
	while (*ret)
		write(1, ret++, 1);
	return (0);
}

int			main(int argc, char **argv)
{
	if (argc > 1)
		strmaxlone(argv, argc);
	write(1, "\n", 1);
	return (0);
}
