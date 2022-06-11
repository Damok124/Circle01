/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:33:14 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:51:04 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while ((big[i]) && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && ((i + j) < len) && big[i])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
**SYNOPSIS
**#include <string.h>
**char *strstr(const char *big, const char	*little);
**char *strcasestr(const char *big, const char *little);
**char *strnstr(const char	*big, const char *little, size_t len);
**#include <string.h>
**#include <xlocale.h>
**char *strcasestr_l(const	char *big, const char *little, locale_t	loc);
**DESCRIPTION
**The strnstr() function locates the	first occurrence of the	null-termi-
**nated string little in the	string big, where not more than	len characters
**are searched.  Characters that appear after a `\0'	character are not
**searched.	Since the strnstr() function is	a FreeBSD specific API,	it
**should only be used when portability is not a concern.
**RETURN VALUES
**If little is an empty string, big is returned; if little occurs nowhere
**in big, NULL is returned; otherwise a pointer to the first	character of
**the first occurrence of little is returned.
*/
