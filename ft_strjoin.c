/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:53:28 by anrechai          #+#    #+#             */
/*   Updated: 2021/11/29 18:27:09 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*i;

	if (!s1 || !s2)
		return (NULL);
	len = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	i = malloc(sizeof(char) * (len + 1));
	if (!i)
		return (NULL);
	ft_strlcpy(i, s1, ft_strlen(s1) + 1);
	ft_strlcat(i, s2, len + 1);
	return (i);
}
