/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:06:25 by anrechai          #+#    #+#             */
/*   Updated: 2021/11/29 18:25:23 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_count(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		i = 1;
		return (i);
	}
	if (n < 0)
	{
		i = 1;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	i;
	long int	nb;
	char		*dest;

	nb = n;
	i = ft_count(nb);
	dest = malloc(sizeof(char) * i + 1);
	if (!dest)
		return (NULL);
	if (nb < 0)
	{
		nb = nb * -1;
		dest[0] = '-';
	}
	dest[i] = '\0';
	i--;
	if (nb == 0)
		dest[0] = '0';
	while (nb)
	{
		dest[i] = nb % 10 + 48;
		nb = nb / 10;
		i--;
	}
	return (dest);
}
