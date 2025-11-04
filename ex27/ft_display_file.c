/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounoua <abounoua@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:22:28 by abounoua          #+#    #+#             */
/*   Updated: 2025/11/04 15:36:48 by abounoua         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int	open_file(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	return (fd);
}

void	ft_puterr(char *err)
{
	while (*err)
	{
		write(2, err, 1);
		err++;
	}
}

void	display_file(char *filename)
{
	int		fd;
	int		size;
	char	buffer[4096];

	fd = open_file(filename);
	if (fd == -1)
	{
		ft_puterr("Cannot read file.\n");
		return ;
	}
	size = read(fd, buffer, 4096);
	buffer[size] = '\0';
	while (size != 0)
	{
		write(1, buffer, size);
		size = read(fd, buffer, 4096);
		buffer[size] = '\0';
	}
	close(fd);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		ft_puterr("File name missing.\n");
	else if (ac > 2)
		ft_puterr("Too many arguments.\n");
	else
		display_file(av[1]);
}
