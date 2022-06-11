/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:12:53 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:48:01 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
**SYNOPSIS
**#include <string.h>
**size_t strlen(const char *s);
**DESCRIPTION
**La fonction strlen() calcule la longueur de la chaîne de caractères s,
**sans compter l'octet nul « \0 » final.
**VALEUR RENVOYÉE
**La fonction strlen() renvoie le nombre de caractères dans la chaîne s.
*/
