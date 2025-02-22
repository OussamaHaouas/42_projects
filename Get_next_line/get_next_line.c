/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:35:39 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/12/25 13:37:00 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <libc.h>
char	*ft_read_line(char *capacitor, char *buffer, int fd)
{
	size_t	read_len;
	char	hook;

	hook = 'F';
	read_len = 0;
	while (hook != '\n' && hook != '\0')
	{
		read_len = read(fd, buffer, BUFFER_SIZE);
		if (read_len == 0)
			return (capacitor);
		buffer[read_len] = '\0';
		hook = ft_strchr(buffer, '\n');
		capacitor = ft_strjoin(capacitor, buffer);
		if (!capacitor)
			return (free(buffer), buffer = NULL, NULL);
		if (capacitor[0] == '\0')
			return (NULL);
	}
	return (capacitor);
}

size_t	ft_to_new_line(char *capacitor)
{
	size_t	n;

	n = 0;
	while (capacitor[n] && capacitor[n] != '\n')
		n++;
	return (n);
}

char	*ft_line(char *capacitor)
{
	char	*line;
	size_t	i;
	size_t	n;

	n = ft_to_new_line(capacitor);
	printf("%zu",n);
	line = malloc(n + 2);
	while (1);
	line = NULL;
	if (!line)
		return (NULL);
	i = 0;
	while (i < n + 1)
	{
		line[i] = capacitor[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_next_lines(char *capacitor)
{
	char	*rest;
	size_t	n;
	size_t	i;

	n = ft_to_new_line(capacitor);
	if (capacitor[n] == '\n')
		n++;
	if (capacitor[n] == '\0')
		return (free(capacitor), capacitor = NULL, NULL);
	rest = malloc(ft_strlen(capacitor) - n + 1);
	if (!rest)
		return (free(capacitor), capacitor = NULL, NULL);
	i = 0;
	while (capacitor[n])
		rest[i++] = capacitor[n++];
	rest[i] = '\0';
	free(capacitor);
	capacitor = NULL;
	return (rest);
}

char	*get_next_line(int fd)
{
	static char	*capacitor;
	char		*buffer;
	char		*line;

	if (BUFFER_SIZE > 2147483647 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (free(capacitor), capacitor = NULL, NULL);
	buffer = malloc((size_t)BUFFER_SIZE + 1);
	if (!buffer)
		return (free(capacitor), capacitor = NULL, NULL);
	capacitor = ft_read_line(capacitor, buffer, fd);
	free(buffer);
	buffer = NULL;
	if (!capacitor)
		return (NULL);
	line = ft_line(capacitor);
	capacitor = ft_next_lines(capacitor);
	return (line);
}

#include <libc.h>

int main()
{
	int fd = open("test.txt", O_RDONLY);
	char *line;
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	// system("leaks a.out");
}