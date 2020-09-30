/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 21:13:55 by jkoskela          #+#    #+#             */
/*   Updated: 2020/06/07 21:14:14 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_display_file(char **av)
{
	int		fd;
	char	buf[BUF_SIZE];

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (0);
	}
	while (read(fd, buf, BUF_SIZE) > 0)
		write(1, &buf, 1);
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return (1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else if (ac < 2)
		ft_putstr("File name missing.\n");
	else if (ac == 2)
		ft_display_file(av);
	return (0);
}
