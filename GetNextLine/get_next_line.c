/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:14:22 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/16 04:07:14 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_check_content(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0
	while (str[i])
	{
		if (str[i] == '\n')
			n++;
		i++;
	}
	if (i < (BUFFER_SIZE) && n == 0)
		n = -1;
	return (n);
}
//renvoie le nb de \n :			 if x > 0
//renvoie 0 si pas de \n :		 if x == 0
//renvoie -1 si fin de fichier : if x < 0;



char	*get_next_line(int fd)
{
	ssize_t	count;
	char	*line;
	static char	*buff;

	buff = (char *)malloc(sizeof(char) * ((BUFFER_SIZE) + 1));
	count = read(fd, buff, BUFFER_SIZE);

	return (line);
}
	//buff[count] = '\0';
