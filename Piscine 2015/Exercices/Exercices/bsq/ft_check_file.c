/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 01:17:00 by pmoulin           #+#    #+#             */
/*   Updated: 2015/07/28 05:06:53 by pmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
int openll (char *argv)
{
FILE* fd;
	fd = open(argv, O_RDONLY);
	printf("%s \n", argv);
	return(0);
}
