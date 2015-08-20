/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/16 02:12:34 by ebitsch           #+#    #+#             */
/*   Updated: 2015/08/16 03:24:24 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ALLOCATION STATIQUE
int age[10];
age[6] = 19;

#ALLOCATION DYNAMIQUE
int *age;
age = malloc(10 * sizeof(int));


#Tableau de pointeurs en allocation statique
int age[2][10]

#Tableau de pointeurs en allocation dynamique
int **ages;
ages = malloc(2 * sizeof(int *));
ages[0] = malloc(10 * sizeof(int));
ages[1] = malloc(10 * sizeof(int));
