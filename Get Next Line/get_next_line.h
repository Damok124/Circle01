/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:06:01 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/19 02:15:55 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdint.h>

size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_check_stash(char *stash);
char	*ft_next_line(char **stash);
char	*ft_make_buff(int fd, char **ret, int *count);
char	*get_next_line(int fd);

#endif
