/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlawson <jlawson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 22:21:31 by jlawson           #+#    #+#             */
/*   Updated: 2015/07/15 23:10:02 by jlawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int res;

	res = 0;
	while (size && *dest)
	{
		dest++;
		size--;
	}
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
