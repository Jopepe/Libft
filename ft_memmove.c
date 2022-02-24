/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnunez-h <jnunez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:39:43 by jnunez-h          #+#    #+#             */
/*   Updated: 2022/02/23 16:00:52 by jnunez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = 0;
	if (!src && !dst)
		return (NULL);
	if (src <= dst)
	{
		while ((int)len--)
		{
			(*(char *)(dst + len)) = (*(const char *)(src + len));
			i++;
		}
	}
	else
	{
		while ((int)len--)
		{
				*(char *)(dst + i) = *(const char *)(src + i);
				i++;
		}
	}
	return (dst);
}
