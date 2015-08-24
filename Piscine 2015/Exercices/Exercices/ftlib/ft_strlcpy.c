/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlawson <jlawson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 22:55:34 by jlawson           #+#    #+#             */
/*   Updated: 2015/07/15 23:11:42 by jlawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int res;

	res = 0;
	size--;
	while (size && *src)
	{
		dest[res] = src[res];
		res++;
		size--;
	}
	dest[res] = '\0';
	res++;
	return (res);
}
