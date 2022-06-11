/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:11:00 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 11:08:52 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
**Prototype
**t_list *ft_lstnew(void *content);
**Paramètres
**content: Le contenu du nouvel élément.
**Valeur de retour
**Le nouvel élément
**Fonctions externes autorisées
**malloc
**Description
**Alloue (avec malloc(3)) et renvoie un nouvel élément. La variable membre
**’content’ est initialisée à l’aide de la valeur du paramètre ’content’.
**La variable ’next’ est initialisée à NULL.
*/
