/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 22:15:19 by gmoreira          #+#    #+#             */
/*   Updated: 2022/03/25 17:24:22 by gmoreira         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] == s2[index]) && (s1[index] && s2[index]))
	{
		index++;
	}
	return (s1[index] - s2[index]);
}

void	ft_sort_params(int argc, char **argv)
{
	int		count;
	int		index;
	char	*temp;

	count = 0;
	while (count < argc)
	{
		index = 1;
		while (index < argc - 1)
		{
			if (ft_strcmp(argv[index], argv[index + 1]) > 0)
			{
				temp = argv[index];
				argv[index] = argv[index + 1];
				argv[index + 1] = temp;
			}
			index++;
		}
		count++;
	}
	ft_print_params (argc, argv);
}

int	main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	return (0);
}
