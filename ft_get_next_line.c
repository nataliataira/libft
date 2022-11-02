/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:04:28 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/11/01 23:20:21 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_join(char *s1, char *s2)
{
	char	*join;
	int		len;
	int		i;
	int		j;

	len = ft_strlen(s1) + ft_strlen(s2);
	join = (char *)malloc(sizeof(char) * (len + 1));
	if (!join)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	while (s2[j])
		join[i++] = s2[j++];
	join[i] = '\0';
	free(s1);
	return (join);
}

static char	*ft_kept_static(char *constant)
{
	int		i;
	int		j;
	char	*kept_static;

	i = 0;
	while (constant[i] && constant[i] != '\n')
		i++;
	if (!constant[i])
	{
		free(constant);
		return (NULL);
	}
	kept_static = (char *)malloc(sizeof(char) * (ft_strlen(constant) - i + 1));
	if (!kept_static)
		return (NULL);
	i++;
	j = 0;
	while (constant[i])
		kept_static[j++] = constant[i++];
	kept_static[j] = '\0';
	free(constant);
	return (kept_static);
}

static char	*ft_reading_line(int fd, char *constant)
{
	char	*buf;
	int		bytes_read;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	buf[0] = '\0';
	bytes_read = 1;
	while ((!ft_strchr(buf, '\n') && bytes_read != 0))
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[bytes_read] = '\0';
		if (constant == NULL)
			constant = ft_strdup(buf);
		else
			constant = ft_join(constant, buf);
	}
	free(buf);
	return (constant);
}

static char	*ft_get_line(char *constant)
{
	int		i;
	char	*line;

	i = 0;
	if (!constant[i])
		return (NULL);
	while (constant[i] && constant[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (constant[i] && constant[i] != '\n')
	{
		line[i] = constant[i];
		i++;
	}
	if (constant[i] == '\n')
	{
		line[i] = constant[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_get_next_line(int fd)
{
	char		*line;
	static char	*constant;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	constant = ft_reading_line(fd, constant);
	if (!constant)
		return (NULL);
	line = ft_get_line(constant);
	constant = ft_kept_static(constant);
	return (line);
}
