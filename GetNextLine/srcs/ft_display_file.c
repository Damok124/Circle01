/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:32:57 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/14 22:41:53 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_files.h"

void	ft_display_file(int fd)
{
	int		ret;
	int		size;
	char	buf[BUFFER_SIZE + 1];
	int		i;

	i = 0;
	ret = 1;
	buf[0] = '\0';
	size = BUFFER_SIZE;
	while (ret)
	{
		while (buf[i])
			write (1, &(buf[i++]), 1);
		ret = read(fd, buf, size);
		buf[ret] = '\0';
		i = 0;
	}
}
