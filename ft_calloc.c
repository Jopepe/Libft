/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnunez-h <jnunez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:56:21 by jnunez-h          #+#    #+#             */
/*   Updated: 2022/02/23 16:00:21 by jnunez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int count, unsigned int size)
{
	char	*x;
	int		t;
	int		i;

	t = count * size;
	x = malloc(t);
	if (!x)
		return (NULL);
	i = 0;
	while (t--)
	{
		x[i] = '\0';
		i++;
	}
	return ((void *)x);
}
