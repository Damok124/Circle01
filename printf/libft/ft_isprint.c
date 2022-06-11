/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:12:53 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 17:15:37 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}
/*
**SYNOPSIS
**#include <ctype.h>
**int isprint(int c);
**DESCRIPTION
**Ces fonctions vérifient si le caractère c, qui doit avoir la valeur
**d'un unsigned char ou valoir EOF, rentre dans une catégorie donnée,
**en accord avec la localisation en cours.
**isprint() vérifie s'il s'agit d'un caractère imprimable, y compris l'espace.
**VALEUR RENVOYÉE
**Les valeurs renvoyées sont non nulles si le caractère c entre dans
**la catégorie testée, et zéro sinon
*/
