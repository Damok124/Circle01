/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:13:07 by zharzi            #+#    #+#             */
/*   Updated: 2022/07/14 22:34:06 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILES_H
# define FT_FILES_H

# define BUFFER_SIZE 10

# include <unistd.h>
# include <fcntl.h>

void	ft_display_file(int fd);

#endif
