/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:14:22 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/19 02:18:00 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_check_stash(char *stash)
{
	int	i;
	int	x;

	x = 0;
	i = -1;
	while (stash[++i] && !x)
	{
		if (stash[i] == '\n')
			x = 1;
	}
	return (x);
}

char	*ft_next_line(char **stash)
{
	char	*tmp;
	char	*line;
	int		n;
	int		i;

	n = 0;
	tmp = *stash;
	while (tmp[n] && tmp[n] != '\n')
		n++;
	if (tmp[n] == '\n')
		n++;
	line = (char *)malloc(sizeof(char) * n + 1);
	if (!line)
		return (NULL);
	i = -1;
	while (++i < n)
		line[i] = tmp[i];
	line[n] = '\0';
	stash[0] = ft_strdup((tmp) + i);
	free(tmp);
	return (line);
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
		free(tbuff);
		return (tret);
	}
	tbuff[*count] = '\0';
	return (tbuff);
}

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
	}
	return (ret);
}
