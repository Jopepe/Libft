/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnunez-h <jnunez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:27:17 by jnunez-h          #+#    #+#             */
/*   Updated: 2022/01/24 12:23:56 by jnunez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	s1len;
	size_t	s2len;

	if (s1 && s2)
	{
		s1len = ft_strlen(s1);
		s2len = ft_strlen(s2);
		str = (char *)malloc(sizeof(char) * (s1len + s2len +1));
		if (!str)
			return (NULL);
		i = -1;
		while (s1[++i] != '\0')
		str[i] = s1[i];
		i = -1;
		while (s2[++i] != '\0')
		{
			str[s1len] = s2[i];
			s1len++;
		}
		str[s1len] = '\0';
		return (str);
	}
	return (NULL);
}
