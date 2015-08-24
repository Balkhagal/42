/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlawson <jlawson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 15:54:52 by jlawson           #+#    #+#             */
/*   Updated: 2015/07/23 22:44:55 by jlawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
void	ft_err_putchar(char c);
void	ft_putstr(char *str);
void	ft_err_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_err_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);
int		ft_fibonacci(int index);
int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);
void	ft_div_mod(int a, int b, int *div, int *mod);
int		ft_factorial(int nb);
int		ft_power(int nb, int power);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strrev(char *str);
void	ft_sort_integer_table(int *tab, int size);
char	**ft_split_whitespaces(char *str);
char	*ft_strdup(char *src);
int		ft_strcmp(char *s1, char *s2);

#endif
