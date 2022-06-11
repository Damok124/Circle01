/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:10:01 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:26:22 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*desti;
	char	*source;

	i = 0;
	if (dest == NULL && src == NULL)
		return (dest);
	desti = dest;
	source = (char *) src;
	while (i < n)
	{
		desti[i] = source[i];
		i++;
	}
	return (dest);
}
/*
**SYNOPSIS
**#include <string.h>
**void *memcpy(void *dest, const void *src, size_t n);
**DESCRIPTION
**La fonction memcpy() copie n octets depuis la zone mémoire src vers la zone
**mémoire dest. Les deux zones ne doivent pas se chevaucher. Si c'est le cas,
**utilisez plutôt memmove(3).
**VALEUR RENVOYÉE
**La fonction memcpy() renvoie un pointeur sur dest.
*/
