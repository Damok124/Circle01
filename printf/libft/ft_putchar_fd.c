/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:45:31 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:27:51 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
**Prototype
**void ft_putchar_fd(char c, int fd);
**Paramètres
**c: Le caractère à écrire.
**fd: Le descripteur de fichier sur lequel écrire.
**Valeur de retour
**Aucune
**Fonctions externes autorisées
**write
**Description
**Écrit le caractère ’c’ sur le descripteur de fichier donné.
*/
