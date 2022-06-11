/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:48:01 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 09:29:02 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while ((*nptr >= '\t' && *nptr <= '\r') || *nptr == ' ')
		nptr++;
	if (*nptr == '-')
		k = -1;
	else if (*nptr == '+' || (*nptr >= '0' && *nptr <= '9'))
		k = 1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr && *nptr >= '0' && *nptr <= '9')
	{
		if (i != 0)
			i *= 10;
		i += *nptr - '0';
		nptr++;
	}
	return (i * k);
}
/*
**SYNOPSIS
**#include <stdlib.h>
**int atoi(const char *nptr);
**DESCRIPTION
**La fonction atoi() convertit le début de la chaîne pointée par nptr
**en entier de type int . Le résultat est identique à un
**appel strtol(nptr, (char **) NULL, 10); à la différence que
**atoi() ne détecte pas d'erreur.
**VALEUR RENVOYÉE
**Le résultat de la conversion.
*/
