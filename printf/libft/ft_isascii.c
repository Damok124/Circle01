/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:12:53 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 09:37:20 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	else
		return (1);
}
/*
**SYNOPSIS
**#include <ctype.
**int isascii(int c);
**DESCRIPTION
**Ces fonctions vérifient si le caractère c, qui doit avoir la valeur
**d'un unsigned char ou valoir EOF, entre dans une catégorie donnée
**d’après les paramètres régionaux indiqués. Les fonctions sans
**suffixe « _l » réalisent les vérifications à partir des paramètres
**régionaux actuels.
**Les fonctions avec le suffixe « _l » réalisent les vérifications
**à partir des paramètres régionaux indiqués par l’objet de paramètres
**régionaux locale. Le comportement de ces fonctions est non défini si
**locale est l’objet de paramètres régionaux LC_GLOBAL_LOCALE
**(consultez duplocale(3)) ou n’est pas un identifiant d’objet de paramètres
**régionaux valable.
**La liste suivante explique les opérations des fonctions sans le
**suffixe « _l ».
**Les fonctions avec le suffixe « _l » ne changent qu’en utilisant l’objet de
**paramètres régionaux locale au lieu des paramètres régionaux actuels.
**VALEUR RENVOYÉE
**Les valeurs renvoyées sont non nulles si le caractère c entre dans la
*catégorie testée, et sinon zéro.
*/
