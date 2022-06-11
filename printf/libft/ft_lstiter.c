/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:08:02 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:11:56 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
**Prototype
**void ft_lstiter(t_list *lst, void (*f)(void *));
**Paramètres
**lst: L’adresse du pointeur vers un élément.
**f: L’adresse de la fonction à appliquer.
**Valeur de retour
**Aucune
**Fonctions externes autorisées
**Aucune
**Description
**Itère sur la liste ’lst’ et applique la fonction ’f’ au contenu
**chaque élément.
*/
