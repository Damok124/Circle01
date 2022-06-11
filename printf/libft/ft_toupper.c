/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 10:45:21 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:55:02 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
**SYNOPSIS
**#include <ctype.h>
**int toupper(int c);
**DESCRIPTION
**toupper() convertit la lettre c en majuscule si c'est possible.
**Si c n'est ni une valeur unsigned char, ni EOF, le comportement de
**ces fonctions est imprévisible.
**VALEUR RENVOYÉE
**La valeur renvoyée est celle de la lettre convertie, ou bien c
**si la conversion n'était pas possible.
*/
