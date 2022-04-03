/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:55:59 by gmoreira          #+#    #+#             */
/*   Updated: 2022/03/30 23:38:58 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ans;
	int	diff;
	int	count;

	if (min >= max)
		return (0);
	diff = max - min;
	count = 0;
	ans = malloc (diff * (sizeof(int)));
	if (!ans)
		return (0);
	while (min < max)
		ans[count++] = min++;
	return (ans);
}
