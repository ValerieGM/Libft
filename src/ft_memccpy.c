/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumbi <rumbi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 08:44:25 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/19 16:08:50 by rumbi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	v;
	char	*dest2;
	char	*src2;

	v = 0;
	dest2 = (char *)dest;
	src2 = (char *)src;
	while (v < n)
	{
		dest2[v] = src2[v];
		if (src2[v] == (char)c)
			return (dest2 + v + 1);
		v++;
	}
	return (NULL);
}
