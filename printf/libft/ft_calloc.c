/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:48:44 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/11 21:00:08 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if ((nmemb == SIZE_MAX || size == SIZE_MAX) && (nmemb > 1 || size > 1))
		return (NULL);
	ptr = (char *)malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
**SYNOPSIS
**#include <stdlib.h>
**void *calloc(size_t nmemb, size_t size);
**void *malloc(size_t size);
**void free(void *ptr);
**void *realloc(void *ptr, size_t size);
**DESCRIPTION
**calloc() alloue la mémoire nécessaire pour un tableau de nmemb éléments de
**taille size octets, et renvoie un pointeur vers la mémoire allouée. Cette
**zone est remplie avec des zéros. Si nmemb ou size vaut 0, calloc() renvoie
**soit NULL, soit un pointeur unique qui pourra être passé ultérieurement à
**free() avec succès.
**malloc() alloue size octets, et renvoie un pointeur sur la mémoire allouée.
**Le contenu de la zone de mémoire n'est pas initialisé. Si size vaut 0,
**malloc() renvoie soit NULL, soit un pointeur unique qui pourra être passé
**ultérieurement à free() avec succès.
**free() libère l'espace mémoire pointé par ptr, qui a été obtenu lors d'un
**appel antérieur à malloc(), calloc() ou realloc(). Si le pointeur ptr n'a
**pas été obtenu par l'un de ces appels, ou s'il a déjà été libéré avec
**free(ptr), le comportement est indéterminé. Si ptr est NULL, aucune
**tentative de libération n'a lieu.
**realloc() modifie la taille du bloc de mémoire pointé par ptr pour
**l'amener à une taille de size octets. realloc() conserve le contenu de la
**zone mémoire minimum entre la nouvelle et l'ancienne taille. Le contenu de
**la zone de mémoire nouvellement allouée n'est pas initialisé. Si ptr est
**NULL, l'appel est équivalent à malloc(size), pour toute valeur de size. Si
**size vaut zéro, et ptr n'est pas NULL, l'appel est équivalent à free(ptr).
**Si ptr n'est pas NULL, il doit avoir été obtenu par un appel antérieur à
**malloc(), calloc() ou realloc(). Si la zone pointée était déplacée, un
**free(ptr) est effectué.
**VALEUR RENVOYÉE
**calloc() et malloc() renvoient un pointeur sur la mémoire allouée, qui est
**correctement alignée pour n'importe quel type de variable. Si elles échouent,
**elles renvoient NULL. NULL peut également être renvoyé par un appel réussi
**à malloc() avec un argument size égal à zéro, ou par un appel réussi de
**realloc() avec nmemb ou size égal à zéro.
**free() ne renvoie pas de valeur.
**realloc() renvoie un pointeur sur la mémoire nouvellement allouée, qui est
**correctement alignée pour n'importe quel type de variable, et qui peut être
**différent de ptr, ou NULL si la demande échoue. Si size vaut zéro, realloc
**renvoie NULL ou un pointeur acceptable pour free(). Si realloc() échoue,
**le bloc mémoire original reste intact, il n'est ni libéré ni déplacé.
*/
