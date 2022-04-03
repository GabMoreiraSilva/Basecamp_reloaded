/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:58:08 by gmoreira          #+#    #+#             */
/*   Updated: 2022/03/29 21:31:28 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		index;
	int		len;

	if (*src == '\0')
	{
		copy = malloc (sizeof (char) * 1);
		copy[0] = '\0';
		return (copy);
	}
	len = ft_strlen (src);
	copy = malloc (sizeof (char) * len + 1);
	index = 0;
	while (src[index])
	{
		copy[index] = src[index];
		index++;
	}
	copy[index] = '\0';
	return (copy);
}
