/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:12:26 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 11:04:31 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
**Prototype
**int ft_lstsize(t_list *lst);
**Paramètres
**lst: Le début de la liste.
**Valeur de retour
**Taille de la liste
**Fonctions externes autorisées
**Aucune
**Description
**Compte le nombre d’éléments de la liste.
*/
