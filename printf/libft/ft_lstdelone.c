/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:06:15 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:10:10 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
/*
**Prototype
**void ft_lstdelone(t_list *lst, void (*del)(void*));
**Paramètres
**lst: L’élément à free
**del: L’adresse de la fonction permettant de supprimer le contenu de l’élément.
**Valeur de retour
**Aucune
**Fonctions externes autorisées
**free
**Description
**Libère la mémoire de l’élément passé en argument en utilisant la fonction
**’del’ puis avec free(3). La mémoire de ’next’ ne doit pas être free.
*/
