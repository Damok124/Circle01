/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:14:22 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/20 18:19:08 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_check_stash(char *stash)
{
	int	i;

	i = 0;
	while (stash[i])
	{
		if (stash[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_make_buff(int fd, char **ret, int *count)
{
	char	*tbuff;
	char	*tret;

	tret = *ret;
	tbuff = (char *)malloc(BUFFER_SIZE + 1);
	if (!tbuff)
		return (NULL);
	*count = read(fd, tbuff, BUFFER_SIZE);
	if (*count == -1)
	{
		ft_true_free(&tbuff);
		return (tret);
	}
	tbuff[*count] = '\0';
	return (tbuff);
}

char	*ft_next_line(char **stash)
{
	t_tools1	x;

	x.n = 0;
	x.tmp = *stash;
	while (x.tmp[x.n] && x.tmp[x.n] != '\n')
		x.n++;
	if (x.tmp[x.n] == '\n')
		x.n++;
	x.line = (char *)malloc(sizeof(char) * x.n + 1);
	if (!x.line)
		return (NULL);
	x.i = -1;
	while (++x.i < x.n)
		x.line[x.i] = x.tmp[x.i];
	x.line[x.n] = '\0';
	stash[0] = ft_strdup((x.tmp) + x.i);
	ft_true_free(&x.tmp);
	return (x.line);
}

char	*get_next_line(int fd)
{
	t_tools2	x;
	static char	*stash = NULL;

	x.ret = NULL;
	x.count = 1;
	if (fd != -1 && BUFFER_SIZE > 0)
	{
		while (x.count && (!stash || !ft_check_stash(stash)))
		{
			x.buff = ft_make_buff(fd, &x.ret, &x.count);
			if (!x.buff)
				return (x.ret);
			x.ret = ft_strjoin(stash, x.buff);
			ft_true_free(&x.buff);
			if (stash)
				ft_true_free(&stash);
			stash = x.ret;
			x.ret = NULL;
		}
		if (stash[0])
			x.ret = ft_next_line(&stash);
		else if (stash[0] == '\0')
			ft_true_free(&stash);
	}
	return (x.ret);
}
/*
char	*get_next_line(int fd)
{
	char		*buff;
	static char	*stash = NULL;
	char		*ret;
	int			count;

	ret = NULL;
	count = 1;
	if (fd != -1 && BUFFER_SIZE > 0)
	{
		while (count && (!stash || !ft_check_stash(stash)))
		{
			buff = ft_make_buff(fd, &ret, &count);
			if (!buff)
				return (ret);
			ret = ft_strjoin(stash, buff);
			free(buff);
			if (stash)
				free(stash);
			stash = ret;
			ret = NULL;
		}
		if (stash[0])
			ret = ft_next_line(&stash);
		else if (stash[0] == '\0')
			free(stash);
	}
	return (ret);
}
*/
