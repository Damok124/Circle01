/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:01:17 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:45:12 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;
	size_t	j;

	ldst = ft_strlen((char *)dst);
	lsrc = ft_strlen((char *)src);
	i = ldst;
	j = 0;
	if (ldst < size)
	{
		while (i < (size - 1) && j < lsrc)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (lsrc + ldst);
	}
	return (lsrc + size);
}
/*
**SYNOPSIS
**#include <bsd/string.h>
**size_t strlcat(char *dst, const char *src, size_t size);
**Description
**La fonction strlcat concatène des chaînes de caractère.
**Elle est designée pour être plus sûre, plus solide, et obtenir des
**remplacements moins sujet aux erreurs que strncat. À la différence de ces
**fonctions, strlcat() prend la taille totale du tampon (pas seulement la
**longueur) et garantir de terminer le résultat par NUL (tant qu'il y a un
**octet de libre dans dst).
**Notez qu'un octet pour le NULL doit être inclut dans size. Notez aussi que
**strlcat() n'opère que sur des chaînes de caractères en vrai C. Cela signifie
**que pour strlcat(), src et dst doivent être terminées par un octet NUL.
**La fonction strlcat() ajoute la chaîne src terminée par NUL à la fin de dst.
**Il ajoutera au plus size - strlen(dst) - 1 octets, terminant le résultat par
**NUL.
**Valeurs de retour
**strlcat() retourne la taille totale de la chaîne de caractère qu'elle essaie
**de créer. Pour strlcat() ça signifie la longueur initiale de dst + la longueur
**de src. Bien que cela puisse sembler quelque peu déroutant, cela a été fait
**pour simplifier la détection de troncature.
**Notez, cependant, que si strlcat() parcourt 'size' caractères sans trouver
**de NUL, la longueur de la chaîne est considérée comme 'size' et la chaîne de
**destination ne sera pas terminé par NUL (puisqu'il n'y avait pas d'espace pour
**le NUL). Cela préserve strlcat() de "s'enfuir" de la fin de la chaîne de
**caractères. En pratique ça ne devrait pas arriver (car cela signifie que la
**taille est incorrecte ou que dst n'est pas une chaîne ''C'' appropriée). Le
**contrôle existe pour prévenir de potentiels problèmes de sécurité venant
**d'un code incorrect.
*/
