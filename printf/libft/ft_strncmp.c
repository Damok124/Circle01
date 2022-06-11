/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:15:42 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:50:36 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] == '\0' && str2[i] == '\0')
			return (0);
		else if (str1[i] - str2[i] != 0)
			return (str1[i] - str2[i]);
		else
			i++;
	}
	return (0);
}
/*
**SYNOPSIS
**#include <string.h>
**int strncmp(const char *s1, const char *s2, size_t n);
**DESCRIPTION
**La fonction strcmp() compare les deux chaînes s1 et s2. Elle renvoie un
**entier négatif, nul, ou positif, si s1 est respectivement inférieure,
**égale ou supérieure à s2.
**La fonction strncmp() est identique sauf qu'elle ne compare que les n (au
**plus) premiers caractères de s1 et s2.
**VALEUR RENVOYÉE
**Les fonctions strcmp() et strncmp() renvoient un entier inférieur, égal ou
**supérieur à zéro si s1 (ou ses n premiers octets) est respectivement
**inférieure, égale ou supérieure à s2.
*/
