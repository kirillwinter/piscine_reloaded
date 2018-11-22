/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:17:38 by wballaba          #+#    #+#             */
/*   Updated: 2018/11/22 16:17:39 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./display_file.h"

#define BUF_SIZE 10

int main(int argc, char const *argv[])
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			ft_putstr("Error opening");
		else
			while ((ret = read(fd, buf, BUF_SIZE)))
			{
				buf[ret] = '\0';
				ft_putstr(buf);
			}
		if (close(fd) == -1 && fd == 3)
			ft_putstr("Error closing");
	}
	else if (argc == 1)
		ft_putstr("Enter name file.\n");
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}

