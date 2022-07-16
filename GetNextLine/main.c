/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:15:36 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/15 21:09:53 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(int ac, char *argv[])
{
	int		fd;
	char	*newline;

	newline = argv[0];
	if (ac > 2)
		write(1, "Too many arguments.\n", 21);
	else if (!argv[1])
		write(1, "File name missing.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			write(1, "Cannot read file.\n", 19);
		else
		{
			while (newline[0])
			{
				newline = get_next_line(fd);
				printf("%s\n", newline);
			}
			close(fd);
		}
	}
	return (0);
}
