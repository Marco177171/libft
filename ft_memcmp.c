/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:08:33 by masebast          #+#    #+#             */
/*   Updated: 2022/01/27 16:31:22 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*conv_s1;
	unsigned char	*conv_s2;

	conv_s1 = (unsigned char *)s1;
	conv_s2 = (unsigned char *)s2;
	if (s1 == s2 || n == 0)
		return (0);
	i = 0;
	while (i < n -1 && conv_s1[i] == conv_s2[i])
		i++;
	return (conv_s1[i] - conv_s2[i]);
}