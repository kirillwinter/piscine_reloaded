/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:17:42 by wballaba          #+#    #+#             */
/*   Updated: 2018/11/20 15:17:45 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;
	int i;

	i = 1;
	fact = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
		return (fact);
	}
	else
		return (0);
}
