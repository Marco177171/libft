/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:05:58 by masebast          #+#    #+#             */
/*   Updated: 2022/01/14 11:41:05 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		n;
	char		*str;

	n = 0;
	str = (char *)b;
	while (n < len)
	{
		str[n] = (unsigned char)c;
		n++;
	}
	return (b);
}