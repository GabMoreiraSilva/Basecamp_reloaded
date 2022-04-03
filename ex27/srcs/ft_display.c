/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:52:14 by gmoreira          #+#    #+#             */
/*   Updated: 2022/03/30 19:03:34 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	ft_display_file(char *filename)
{
	int		file;
	char	buffer[1];
	size_t	r;

	file = open (filename, O_RDONLY);
	if (file == -1)
	{
		ft_putstr ("File name missing.");
		return ;
	}
	while (1)
	{
		r = read(file, buffer, 1);
		if (r == 0)
		{
			close(file);
			break ;
		}
		ft_putchar (buffer[0]);
	}
}

int	main(int argc, char **argv)
{
	if (argc <= 1)
	{
		ft_putstr ("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr ("Too many arguments.\n");
		return (0);
	}
	ft_display_file (argv[1]);
}
