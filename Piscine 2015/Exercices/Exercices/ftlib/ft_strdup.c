/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlawson <jlawson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 12:58:04 by jlawson           #+#    #+#             */
/*   Updated: 2015/07/23 18:04:11 by jlawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

char	*ft_strdup(char *src)
{
	char *res;

	res = malloc(ft_strlen(src) + 1);
	if (res)
		res = ft_strcpy(res, src);
	return (res);
}
