/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:02:31 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 09:50:24 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*lst = new;
}
/*
**Prototype
**void ft_lstadd_back(t_list **lst, t_list *new);
**Paramètres
**lst: L’adresse du pointeur vers le premier élément de la liste.
**new: L’adresse du pointeur vers l’élément à rajouter à la liste.
**Valeur de retour
**Aucune
**Fonctions externes autorisées
**Aucune
**Description
**Ajoute l’élément ’new’ à la fin de la liste.
*/
