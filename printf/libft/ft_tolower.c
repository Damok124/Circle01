/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 10:45:21 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:53:40 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
**SYNOPSIS
**#include <ctype.h>
**int tolower(int c);
**DESCRIPTION
**tolower() convertit la lettre c en minuscule si c'est possible.
**Si c n'est ni une valeur unsigned char, ni EOF, le comportement de
**ces fonctions est imprévisible.
**VALEUR RENVOYÉE
**La valeur renvoyée est celle de la lettre convertie, ou bien c
**si la conversion n'était pas possible.
*/
