/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:12:17 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 09:40:21 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
**SYNOPSIS
**#include <ctype.h>
**int isdigit(int c);
**DESCRIPTION
**Ces fonctions vérifient si le caractère c, qui doit avoir la valeur d'un
**unsigned char ou valoir EOF, rentre dans une catégorie donnée, en accord
**avec la localisation en cours.
**isdigit() vérifie si l'on a un chiffre (0 à 9).
**VALEUR RENVOYÉE
**Les valeurs renvoyées sont non nulles si le caractère c entre dans la
**catégorie testée, et zéro sinon.
*/
