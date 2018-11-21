/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:38:20 by wballaba          #+#    #+#             */
/*   Updated: 2018/11/21 16:38:21 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *arr;

	i = 0;
	if (min >= max)
		return (0);
	arr = (int*)malloc(sizeof(*arr) * (max - min + 1));
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
