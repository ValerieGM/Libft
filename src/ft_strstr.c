/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumbi <rumbi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 16:20:15 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/19 16:08:50 by rumbi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t t;
	size_t v;

	t = 0;
	if (!needle[0])
		return ((char*)haystack);
	while (haystack[t])
	{
		v = 0;
		while (haystack[t + v] == needle[v] && haystack[t + v] && needle[v])
			v++;
		if (!needle[v])
			return ((char *)haystack + t);
		t++;
	}
	return (NULL);
}
