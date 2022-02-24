/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnunez-h <jnunez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:27:26 by jnunez-h          #+#    #+#             */
/*   Updated: 2022/02/23 16:04:41 by jnunez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numstring(char const *s1, char c)
{
	int	strgs;
	int	sw;

	strgs = 0;
	sw = 0;
	if (*s1 == '\0')
		return (0);
	while (*s1 != '\0')
	{
		if (*s1 == c)
			sw = 0;
		else if (sw == 0)
		{
			sw = 1;
			strgs++;
		}
		s1++;
	}
	return (strgs);
}

static int	numchar(char const *s2, char c, int i)
{
	int	lenght;

	lenght = 0;
	while (s2[i] != c && s2[i] != '\0')
	{
		lenght++;
		i++;
	}
	return (lenght);
}

static char	**ft_free(char const **dst, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)dst[j]);
	}
	free(dst);
	return (NULL);
}

static char	**swapstr(char const *s, char **dst, char c, int strgs)
{
	int	x;
	int	z;
	int	i;

	x = 0;
	z = 0;
	while (s[x] != '\0' && z < strgs)
	{
		i = 0;
		while (s[x] == c)
			x++;
		dst[z] = (char *)malloc(sizeof(char) * numchar(s, c, x) + 1);
		if (dst[z] == NULL)
			return (ft_free((char const **)dst, z));
		while (s[x] != '\0' && s[x] != c)
			dst[z][i++] = s[x++];
		dst[z][i] = '\0';
		z++;
	}
	dst[z] = 0;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		strgs;

	if (s == NULL)
		return (NULL);
	strgs = numstring(s, c);
	dst = (char **)malloc(sizeof(char *) * (strgs + 1));
	if (dst == NULL)
		return (NULL);
	return (swapstr(s, dst, c, strgs));
}
/*
int	count_words(char const *s, char c)
{
	int	cs;
	int	i;

	i = 0;
	cs = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			cs++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cs);
}

char	*init_str(char const *s, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, i + 1);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		strs_len;
	char	**ptr;

	if (!s)
		return (NULL);
	strs_len = count_words(s, c);
	ptr = (char **)malloc(sizeof(char *) * (strs_len + 1));
	if (ptr == NULL)
		return (NULL);
	i = -1;
	while (++i < strs_len)
	{
		while (s[0] == c)
			s++;
		if (!(ptr[i] = init_str(s, c)))
		{
			while (i > 0)
				free(ptr[i--]);
			free(ptr);
			return (NULL);
		}
		s = s + ft_strlen(ptr[i]);
	}
	ptr[i] = 0;
	return (ptr);
}
*/