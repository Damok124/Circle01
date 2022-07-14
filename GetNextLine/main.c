/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:12:19 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/14 22:34:13 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_files.h"

int	main(int ac, char *argv[])
{
	int		fd;

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
			ft_display_file(fd);
			close(fd);
		}
	}
	return (0);
}
