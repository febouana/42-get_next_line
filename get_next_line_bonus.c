/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:29:36 by febouana          #+#    #+#             */
/*   Updated: 2023/12/19 16:29:39 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

static char	*set_line(char *line_buffer)
{
	char	*res;
	ssize_t	i;

	i = 0;
	while (line_buffer[i] != '\n' && line_buffer[i] != '\0')
		i++;
	if (line_buffer[i] == 0 || line_buffer[1] == 0)
		return (NULL);
	res = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - i);
	if (*res == 0)
	{
		free(res);
		res = NULL;
	}
	line_buffer[i + 1] = 0;
	return (res);
}

static char	*read_fd(int fd, char *audd, char *buffer)
{
	char	*tmp;
	ssize_t	byte_read;

	byte_read = 1;
	while (byte_read > 0)
	{
		byte_read = read(fd, buffer, BUFFER_SIZE);
		if (byte_read == -1)
		{
			free(audd);
			return (NULL);
		}
		else if (byte_read == 0)
			break ;
		buffer[byte_read] = 0;
		if (!audd)
			audd = ft_strdup("");
		tmp = audd;
		audd = ft_strjoin(tmp, buffer);
		free(tmp);
		tmp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (audd);
}

char	*get_next_line(int fd)
{
	static char	*audd[MAX_FD];
	char		*line;
	char		*buffer;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (fd < 0 || BUFFER_SIZE == 0 || read(fd, 0, 0) < 0)
	{
		free(audd[fd]);
		free(buffer);
		audd[fd] = NULL;
		buffer = NULL;
		return (NULL);
	}
	if (!buffer)
		return (NULL);
	line = read_fd(fd, audd[fd], buffer);
	free(buffer);
	buffer = NULL;
	if (!line)
		return (NULL);
	audd[fd] = set_line(line);
	return (line);
}
