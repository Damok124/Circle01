/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:20:29 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/02 03:24:16 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//int	BUFFER_SIZE = 42;////////////////////////////////////////////A SUPPRIMER

char	*get_next_line(int fd)
{
	char		buffer[BUFFER_SIZE];
	static char	*str;
	int size 	= 0;

	size = read(fd, buffer, BUFFER_SIZE);
	buffer[size] = '\0';
	printf("%s\n", buffer);
	return (NULL);
}