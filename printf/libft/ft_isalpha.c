/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:35:55 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:31:04 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c < 'A' || c > 'z')
		return (0);
	else if (c > 'Z' && c < 'a')
		return (0);
	else
		return (1);
}
/*
**SYNOPSIS
**#include <ctype.h>
**int isalpha(int c);
**DESCRIPTION
**Ces fonctions vérifient si le caractère c, qui doit avoir la valeur d'un
**unsigned char ou valoir EOF, rentre dans une catégorie donnée, en accord
**avec la localisation en cours.
**isalpha() vérifie si l'on a un caractère alphabétique. Dans la localisation
**"C" standard, c'est équivalent à (isupper(c) || islower(c)). Dans
**certaines localisations, il peut y avoir des caractères supplémentaires
**pour lesquels isalpha() est vrai, c'est-à-dire pour des lettres qui ne
**sont ni majuscules ni minuscules.
**VALEUR RENVOYÉE
**Les valeurs renvoyées sont non nulles si le caractère c entre dans la
**catégorie testée, et zéro sinon.
*/
