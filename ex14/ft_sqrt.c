/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:58:22 by gmoreira          #+#    #+#             */
/*   Updated: 2022/03/30 21:48:49 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	start;
	int	ans;

	start = 1;
	ans = 0;
	while (ans != nb)
	{
		if (start >= nb / 2)
			return (0);
		ans = 0;
		ans = start * start;
		start++;
	}
	return (start - 1);
}
