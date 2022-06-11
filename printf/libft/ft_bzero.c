/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:28:59 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/11 19:33:38 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*mem;
	size_t			i;

	mem = s;
	i = 0;
	while (i < n)
	{
		mem[i] = '\0';
		i++;
	}
}
/*
**SYNOPSIS
**#include <strings.h>
**void bzero(void *s, size_t n);
**DESCRIPTION
**La fonction bzero() met à 0 (octets contenant « \0 ») les n premiers octets
**du bloc pointé par s.
**VALEUR RENVOYÉE
**Aucune.
*/
