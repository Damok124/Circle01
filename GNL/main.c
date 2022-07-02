/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 02:50:30 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/02 03:23:31 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//ssize_t read(int fildes, void *buf, size_t nbyte);

int	main(int ac, char **av)
{
	(void)ac;
	int fd = open(av[1], 0); // Ouvre le fichier => on recupere un pointeur -> (int)
	printf("%s\n", get_next_line(fd)); // Envois du fd a getnextline
	return (0);
}
