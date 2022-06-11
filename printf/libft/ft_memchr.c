/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 06:59:17 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 11:08:50 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	size_t			i;
	unsigned char	uc;

	str = (void *)s;
	i = 0;
	while (n)
	{
		uc = str[i];
		if ((uc - (unsigned char) c) == 0)
		{
			return (&str[i]);
		}
		n--;
		i++;
	}
	return (NULL);
}
/*
**SYNOPSIS
**#include <string.h>
**void *memchr(const void *s, int c, size_t n);
**DESCRIPTION
**La fonction memchr() examine les n premiers octets de la zone
**mémoire pointée par s à la recherche du caractère c. Le premier octet
**correspondant à c (interprété comme un unsigned char) arrête l'opération.
**VALEUR RENVOYÉE
**Les fonctions memchr() et memrchr() renvoient un pointeur sur l'octet
**correspondant, ou NULL si le caractère n'est pas présent dans la zone
**de mémoire concernée.
*/
