/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:59:24 by gmoreira          #+#    #+#             */
/*   Updated: 2022/03/24 22:16:00 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(int argc, char **argv)
{
	int	number;
	int	index;

	number = 1;
	index = 0;
	while (number < argc)
	{
		while (argv[number][index])
		{
			ft_putchar (argv[number][index]);
			index++;
		}
		ft_putchar ('\n');
		index = 0;
		number++;
	}
}

int	main(int argc, char **argv)
{
	ft_print_params (argc, argv);
	return (0);
}
