/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 20:38:53 by wballaba          #+#    #+#             */
/*   Updated: 2018/11/20 20:38:55 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*arr;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	arr = (char*)malloc(sizeof(*arr) * (len + 1));
	len = 0;
	while (src[len] != '\0')
	{
		arr[len] = src[len];
		len++;
	}
	return (arr);
}
