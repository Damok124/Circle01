/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:52:00 by zharzi            #+#    #+#             */
/*   Updated: 2022/05/16 10:34:20 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < -9)
	{
		write(fd, "-", 1);
		nbr = n * -1;
		ft_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd((nbr % 10) + '0', fd);
	}
	else if (n >= 0 && n < 10)
		ft_putchar_fd(n + '0', fd);
	else if (n < 0 && n > -10)
	{
		ft_putchar_fd('-', fd);
		nbr = n * -1;
		ft_putchar_fd(nbr + '0', fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
/* meilleure fonction
**void ft_putnbr_fd(int n, int fd)
**{
**	char *s;
**
**	s = ft_itoa(n);
**	ft_putstr_fd(s, fd);
**	free(s);
**}
**Prototype
**void ft_putnbr_fd(int n, int fd);
**Paramètres
**n: L’entier à écrire.
**fd: Le descripteur de fichier sur lequel écrire.
**Valeur de retour
**Aucune
**Fonctions externes autorisées
**write
**Description
**Écrit l’entier ’n’ sur le descripteur de fichier donné.
*/
