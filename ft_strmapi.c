/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:43:08 by anrechai          #+#    #+#             */
/*   Updated: 2021/11/29 18:27:37 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned long	j;
	unsigned long	i;
	char			*dest;

	i = 0;
	j = 0;
	if (!s || !f)
		return (NULL);
	while (s[j])
		j++;
	dest = malloc(sizeof(char) * (j + 1));
	if (!dest || !s || !f)
		return (NULL);
	while (s[i] && i < j)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
