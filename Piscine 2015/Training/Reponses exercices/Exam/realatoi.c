/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeglain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/23 16:20:03 by mdeglain          #+#    #+#             */
/*   Updated: 2015/08/23 16:24:23 by mdeglain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char string[] = " \n	\n 55";
	printf("%d\n", atoi(string));
	return (0);
}
