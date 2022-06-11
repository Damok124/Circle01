/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:53:26 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:43:56 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	i = 0;
	j = 0;
	k = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) *(k + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i + j] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
/*
**Prototype
**char *ft_strjoin(char const *s1, char const *s2);
**Paramètres
**s1: La chaîne de caractères préfixe.
**s2: La chaîne de caractères suffixe.
**Valeur de retour
**La nouvelle chaîne de caractères.
**NULL si l’allocation échoue.
**Fonctions externes autorisées
**malloc
**Description
**Alloue (avec malloc(3)) et retourne une nouvelle chaîne, résultat de la
**concaténation de s1 et s2.
*/
