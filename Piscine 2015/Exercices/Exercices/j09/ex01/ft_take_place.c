/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_place.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 20:41:26 by pmoulin           #+#    #+#             */
/*   Updated: 2015/07/17 10:45:25 by pmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_takes_place(int hour)
{
	int hourtwo;

	hourtwo = hour + 1;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour > 12)
	{
		hour = hour - 12;
		hourtwo = hour + 1;
		printf(" %d.00 P.M. AND %d.00 P.M.\n", hour, hourtwo);
	}
	else if (hour < 12)
		printf("%d.00 A.M. AND %d.00 A.M.", hour, hourtwo);
	else if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.");
	else if (hour == 0)
		printf("0.00 A.M. AND 1.00 A.M.\n");
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. 12 AMD 12.00");
}
