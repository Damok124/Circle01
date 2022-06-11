/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:54:50 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:43:16 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f((i), &s[i]);
		i++;
	}
}
/*
**Prototype
**void ft_striteri(char *s, void (*f)(unsigned int, char*));
**Paramètres
**s: La chaîne de caractères sur laquelle itérer.
**f: La fonction à appliquer à chaque caractère.
**Valeur de retour
**Aucune
**Fonctions externes autorisées
**Aucune
**Description
**Applique la fonction ’f’ à chaque caractère de la chaîne de caractères
**transmise comme argument, et en passant son index comme premier argument.
**Chaque caractère est transmis par adresse à ’f’ afin d’être modifié si
**nécessaire.
*/
