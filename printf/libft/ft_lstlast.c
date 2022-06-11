/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:08:24 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 11:08:53 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = NULL;
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
	}
	return (tmp);
}
/*
**Prototype
**t_list *ft_lstlast(t_list *lst);
**Paramètres
**lst: Le début de la liste.
**Valeur de retour
**Dernier élément de la liste
**Fonctions externes autorisées
**Aucune
**Description
**Renvoie le dernier élément de la liste.
*/
