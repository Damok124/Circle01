/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:55:26 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:52:36 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	ssize_t	i;
	ssize_t	j;

	i = -1;
	j = ft_strlen(s1);
	if (s1)
	{
		while (ft_strchr(set, s1[++i]))
			;
		while (ft_strrchr(set, s1[--j]) && j >= 0)
			;
		str = ft_substr(s1, i, (j - i + 1));
		if (str)
			return (str);
	}
	str = malloc(sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}
/*
**Prototype
**char *ft_strtrim(char const *s1, char const *set);
**Paramètres
**s1: La chaîne de caractères à trimmer.
**set: Le set de référence de caractères à trimmer.
**Valeur de retour
**La chaîne de caractères trimmée.
**NULL si l’allocation échoue.
**Fonctions externes autorisées
**malloc
**Description
**Alloue (avec malloc(3)) et retourne une copie de la chaîne ’s1’,
**sans les caractères spécifiés dans ’set’ au début et à la fin de
**la chaîne de caractères.
*/
