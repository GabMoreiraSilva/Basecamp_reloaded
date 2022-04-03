/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 23:41:27 by gmoreira          #+#    #+#             */
/*   Updated: 2022/04/03 01:10:14 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	ans;

	count = 0;
	ans = 0;
	if (ans == 0)
		return (0);
	while (tab[count] != 0)
	{
		if (f (tab[count]))
		{
			ans++;
			count++;
		}
		else
			count++;
	}
	return (ans);
}
