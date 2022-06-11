/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:28:59 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:27:20 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*mem;
	size_t			i;

	mem = s;
	i = 0;
	while (i < n)
	{
		mem[i] = c;
		i++;
	}
	return (s);
}
/*
**SYNOPSIS
**#include <string.h>
**void *memset (void *s, int c, size_t n);
**DESCRIPTION
**La fonction memset() remplit les n premiers octets de la zone mémoire
**pointée par s avec l'octet c.
**VALEUR RENVOYÉE
**La fonction memset() renvoie un pointeur sur la zone mémoire s.
*/
