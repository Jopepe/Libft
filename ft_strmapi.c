/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnunez-h <jnunez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:49:48 by jnunez-h          #+#    #+#             */
/*   Updated: 2022/02/18 08:45:49 by jnunez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*a;

	i = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	a = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	a[ft_strlen(s)] = '\0';
	while (s[i] != '\0')
	{
		a[i] = (*f)(i, s[i]);
		i++;
	}
	return (a);
}
