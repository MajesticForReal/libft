/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:27:50 by anrechai          #+#    #+#             */
/*   Updated: 2021/11/29 18:27:17 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srclen;

	i = 0;
	j = 0;
	if (!dst && !src)
		return (0);
	srclen = ft_strlen(src);
	while (i < size && dst[i])
		i++;
	if (i + 2 > size)
		return (i + srclen);
	while (i + j < size - 1 && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (i + srclen);
}
