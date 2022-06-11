/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:32:21 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:25:55 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if ((str1[i] - str2[i]) != 0)
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
/*
**SYNOPSIS
**#include <string.h>
**int memcmp(const void *s1, const void *s2, size_t n);
**DESCRIPTION
**La fonction memcmp() compare les n premiers octets des zones mémoire
**s1 et s2. Elle renvoie un entier inférieur, égal, ou supérieur à zéro,
**si s1 est respectivement inférieure, égale ou supérieur à s2.
**VALEUR RENVOYÉE
**La fonction memcmp() renvoie un entier négatif, nul ou positif si
**les n premiers octets de s1 sont respectivement inférieurs, égaux ou
**supérieurs aux n premiers octets de s2.
*/
