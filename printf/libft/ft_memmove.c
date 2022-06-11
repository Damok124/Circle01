/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:08:29 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:26:56 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destb;
	char	*srcb;

	if ((dest == NULL && src == NULL) || n == 0)
		return (dest);
	destb = (char *)dest;
	srcb = (char *)src;
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	else
	{
		while (n--)
			destb[n] = srcb[n];
	}
	return (destb);
}
/*
**SYNOPSIS
**#include <string.h>
**void *memmove(void *dest, const void *src, size_t n);
**DESCRIPTION
**La fonction memmove() copie n octets depuis la zone mémoire src vers
**la zone mémoire dest. Les deux zones peuvent se chevaucher : la copie
**se passe comme si les octets de src étaient d'abord copiés dans
**une zone temporaire qui ne chevauche ni src ni dest, et les octets
**sont ensuite copiés de la zone temporaire vers dest.
**VALEUR RENVOYÉE
**La fonction memmove() renvoie un pointeur sur dest.
*/
