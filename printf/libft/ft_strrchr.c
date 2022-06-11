/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 14:56:52 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:52:09 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i != -1)
	{
		if (s[i] == (unsigned char) c)
			return ((char *)&s[i]);
		else
			i--;
	}
	return (NULL);
}
/*
**SYNOPSIS
**#include <string.h>
**char *strrchr(const char *s, int c);
**DESCRIPTION
**La fonction strrchr() renvoie un pointeur sur la dernière occurrence du
**caractère c dans la chaîne s.
**Pour ces fonctions, « caractère » signifie « octet » ; elles ne marchent
**pas avec des caractères larges ou multi-octets.
**VALEUR RENVOYÉE
**Les fonctions strchr() et strrchr() renvoient un pointeur sur le caractère
**correspondant, ou NULL si le caractère n'a pas été trouvé.
*/
