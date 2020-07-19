/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumbi <rumbi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 08:44:53 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/19 16:08:50 by rumbi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	v;
	char	*str1;
	char	*str2;

	v = 0;
	str1 = (char*)s1;
	str2 = (char*)s2;
	while (v < n)
	{
		if (str1[v] != str2[v])
			return ((unsigned char)str1[v] - (unsigned char)str2[v]);
		v++;
	}
	return (0);
}
