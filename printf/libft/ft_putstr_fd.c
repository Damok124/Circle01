/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:48:47 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:35:23 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i])
		ft_putchar_fd(s[i], fd);
}
/*
**Prototype
**void ft_putstr_fd(char *s, int fd);
**Paramètres
**s: La chaîne de caractères à écrire.
**fd: Le descripteur de fichier sur lequel écrire.
**Valeur de retour
**Aucune
**Fonctions externes autorisées
**write
**Description
**Écrit la chaîne de caractères ’s’ sur le descripteur de fichier donné.
*/
