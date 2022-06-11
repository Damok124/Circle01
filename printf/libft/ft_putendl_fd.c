/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:49:55 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:28:21 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
**Prototype
**void ft_putendl_fd(char *s, int fd);
**Paramètres
**s: La chaîne de caractères à écrire.
**fd: Le descripteur de fichier sur lequel écrire.
**Valeur de retour
**Aucune
**Fonctions externes autorisées
**write
**Description
**Écrit La chaîne de caractères ’s’ sur le descripteur de fichier donné suivie
**d’un retour à la ligne.
*/
