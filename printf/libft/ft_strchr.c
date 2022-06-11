/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 00:15:02 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:42:23 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	i = 0;
	while (c > 127)
		c -= 128;
	p = (char *)s;
	while (i <= ft_strlen(s))
	{
		if (p[i] == c)
			return (&p[i]);
		i++;
	}
	return (NULL);
}
/*
**SYNOPSIS
**#include <string.h>
**char *strchr(const char *s, int c);
**DESCRIPTION
**La fonction strchr() renvoie un pointeur sur la première occurrence du
**caractère c dans la chaîne s.
**Pour ces fonctions, « caractère » signifie « octet » ; elles ne marchent
**pas avec des caractères larges ou multi-octets.
**VALEUR RENVOYÉE
**Les fonctions strchr() et strrchr() renvoient un pointeur sur le caractère
**correspondant, ou NULL si le caractère n'a pas été trouvé.
*/
