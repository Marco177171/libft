/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:53:03 by masebast          #+#    #+#             */
/*   Updated: 2022/01/14 17:48:11 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst)
	{
		return (NULL);
	}
	while (n > 0)
	{
		*(char *)(dst + i) = *(const char *)(src + i);
		i++;
		n--;
	}
	return (dst);
}
