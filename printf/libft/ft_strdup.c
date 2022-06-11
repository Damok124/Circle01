/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:53:24 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:42:48 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	ls;
	size_t	i;
	char	*dup;

	i = 0;
	ls = ft_strlen(s) + 1;
	dup = (char *)malloc(sizeof(char) * ls);
	if (dup == NULL)
		return (NULL);
	while (i < ls)
	{
		dup[i] = (char)s[i];
		i++;
	}
	return (dup);
}
/*
**SYNOPSIS
**#include <string.h>
**char *strdup(const char *s);
**DESCRIPTION
**La fonction strdup() renvoie un pointeur sur une nouvelle chaîne de
**caractères qui est dupliquée depuis s. La mémoire occupée par cette
**nouvelle chaîne est obtenue en appelant malloc(3), et peut (doit)
**donc être libérée avec free(3).
**VALEUR RENVOYÉE
**La fonction strdup() renvoie un pointeur sur la chaîne dupliquée,
**ou NULL s'il n'y avait pas assez de mémoire.
*/
