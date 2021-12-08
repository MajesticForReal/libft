/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:37:59 by anrechai          #+#    #+#             */
/*   Updated: 2021/11/29 20:26:31 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dest;

	dest = malloc(nmemb * size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, nmemb * size);
	return (dest);
}
