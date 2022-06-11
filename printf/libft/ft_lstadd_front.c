/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:02:53 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 09:53:09 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
**Prototype
**void ft_lstadd_front(t_list **lst, t_list *new);
**Paramètres
**lst: L’adresse du pointeur vers le premier élément de la liste.
**!!! **lst n'est pas un élément, c'est le 'pointeur de premier' qui
**ne change jamais d'adresse.
**new: L’adresse du pointeur vers l’élément à rajouter à la liste.
**Valeur de retour
**Aucune
**Fonctions externes autorisées
**Aucune
**Description
**Ajoute l’élément ’new’ au début de la liste.
*/
