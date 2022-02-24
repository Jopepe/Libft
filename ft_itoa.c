/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnunez-h <jnunez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:27:35 by jnunez-h          #+#    #+#             */
/*   Updated: 2021/11/26 09:27:35 by jnunez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	cal(int n)
{
	int	num;
	int	tam;

	num = n;
	tam = 1;
	if (num == -2147483648)
	{
		tam++;
		num /= 10;
	}
	if (n < 0)
	{
		tam++;
		num *= -1;
	}
	while (num > 9)
	{
		tam++;
		num /= 10;
	}
	return (tam);
}

static	char	*con(int n, int tam, char *arr)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		arr[10] = '8';
		n /= 10;
		tam--;
	}
	if (n < 0)
	{
		arr[0] = '-';
		n *= -1;
		i++;
	}
	while (i < tam)
	{
		arr[tam - 1] = (n % 10) + '0';
		n /= 10;
		tam--;
	}	
	return (arr);
}

char	*ft_itoa(int n)
{
	int		tam;
	char	*str;

	tam = cal(n);
	str = ft_calloc(sizeof(char), tam + 1);
	if (str == 0)
		return (0);
	str = con(n, tam, str);
	return (str);
}
