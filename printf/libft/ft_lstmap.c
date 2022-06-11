/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:09:10 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 17:21:17 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp2 = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			if (tmp2 != NULL)
				ft_lstclear(&tmp2, del);
			return (NULL);
		}
		ft_lstadd_back(&tmp2, tmp);
		if (tmp2 == NULL)
			tmp2 = tmp;
		lst = lst->next;
	}
	return (tmp2);
}
/*
**Prototype
**t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
**Paramètres
**lst: L’adresse du pointeur vers un élément.
**f: L’adresse de la fonction à appliquer.
**del: L’adresse de la fonction permettant de supprimer le contenu d’un élément.
**Valeur de retour
**La nouvelle liste. NULL si l’allocation échoue
**Fonctions externes autorisées
**malloc, free
**Description
**Itère sur la liste ’lst’ et applique la fonction ’f ’au contenu de
**chaque élément. Crée une nouvelle liste résultant des applications
**successives de ’f’. La fonction ’del’ est là pour détruire le contenu
**d’un élément si nécessaire.
*/
