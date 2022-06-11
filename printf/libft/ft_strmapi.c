/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:43:18 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 11:08:46 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	str[ft_strlen(s)] = '\0';
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
/*
**Prototype
**char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
**Paramètres
**s: La chaîne de caractères sur laquelle itérer.
**f: La fonction à appliquer à chaque caractère.
**Valeur de retour
**La chaîne de caractères résultant des applications successives de ’f’.
**Retourne NULL si l’allocation échoue.
**Fonctions externes autorisées
**malloc
**Description
**Applique la fonction ’f’ à chaque caractère de la chaîne de caractères
**passée en argument pour créer une nouvelle chaîne de caractères
**(avec malloc(3)) résultant des applications successives de ’f’.
*/
