/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:58:24 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/17 15:49:37 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_splitrowcount(const char *s, char c)
{
	size_t	n;
	size_t	i;

	n = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			n++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	t_count	count;

	count.a = -1;
	count.i = -1;
	count.j = -1;
	tab = (char **)malloc(sizeof(char *) * (ft_splitrowcount(s, c) + 1));
	if (!tab)
		return (NULL);
	tab[ft_splitrowcount(s, c)] = NULL;
	while (++count.i < (ssize_t)ft_strlen(s) && \
	count.a < ((ssize_t)ft_splitrowcount(s, c)))
	{
		if (count.i == 0 || (s[count.i - 1] == c && s[count.i] != c))
		{
			while (s[count.i] && s[count.i] == c)
				count.i++;
			while (s[count.i + (++count.j)] && s[count.i + count.j] != c)
				;
			if (++count.a != (ssize_t)ft_splitrowcount(s, c))
				tab[count.a] = ft_substr(s, count.i, count.j);
			count.j = 0;
		}
	}
	return (tab);
}
/*
**Prototype
**char **ft_split(char const *s, char c);
**Paramètres
**s: La chaîne de caractères à découper.
**c: Le caractère délimiteur.
**Valeur de retour
**Le tableau de nouvelles chaînes de caractères résultant du découpage.
**NULL si l’allocation échoue.
**Fonctions externes autorisées
**malloc, free
**Description
**Alloue (avec malloc(3)) et retourne un tableau de chaînes de caractères
**obtenu en séparant ’s’ à
**l’aide du caractère ’c’, utilisé comme délimiteur.
**Le tableau doit être terminé par NULL.
*/
