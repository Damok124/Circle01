/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:49:49 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:53:16 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	ssize_t	j;
	char	*str;

	i = start;
	j = -1;
	if (i > ft_strlen(s) || len == 0)
	{
		str = malloc(sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len > (ft_strlen(s) - i))
		str = malloc((sizeof(char) * (ft_strlen(s) - i)) + 1);
	else
		str = malloc((sizeof(char) * len) + 1);
	if (!str)
		return (NULL);
	while (++j < (ssize_t)len && s[i + j])
		str[j] = s[i + j];
	str[j] = '\0';
	return (str);
}
/*
**Prototype
**char *ft_substr(char const *s, unsigned int start, size_t len);
**Paramètres
**s: La chaîne de laquelle extraire la nouvelle chaîne.
**start: L’index de début de la nouvelle chaîne dans la chaîne ’s’.
**len: La taille maximale de la nouvelle chaîne.
**Valeur de retour La nouvelle chaîne de caractères.
**NULL si l’allocation échoue.
**Fonctions externes autorisées
**malloc
**Description
**Alloue (avec malloc(3)) et retourne une chaîne de caractères issue de
**la chaîne ’s’. Cette nouvelle chaîne commence à l’index ’start’ et a
**pour taille maximale ’len’.
*/
