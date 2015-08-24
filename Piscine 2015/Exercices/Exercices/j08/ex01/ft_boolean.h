/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/20 22:24:17 by pmoulin           #+#    #+#             */
/*   Updated: 2015/07/21 21:23:27 by pmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdbool.h>
#ifndef __FT_BOOLEAN_H__
# define __FT_BOOLEAN_H__p
#define TRUE 1
#define FALSE 0
#define EVEN_MSG "I have a pair number of arguments.\n"
#define ODD_MSG "I have an impair number of arguments.\n"
#define SUCCESS 0
#define EVEN(nbr) (nbr + 1) % 2 
typedef int t_bool;
#endif
