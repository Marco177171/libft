/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:41:22 by masebast          #+#    #+#             */
/*   Updated: 2022/01/16 19:58:04 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*conv_dst;
	char	*conv_src;

	conv_src = (char *)src;
	conv_dst = (char *)dst;
	i = 0;
	if (conv_src == NULL && conv_dst == NULL)
		return (NULL);
	if (conv_dst > conv_src)
		while (len-- > 0)
			conv_dst[len] = conv_src[len];
	else
	{
		while (i < len)
		{
			conv_dst[i] = conv_src[i];
			i++;
		}
	}
	return (dst);
}