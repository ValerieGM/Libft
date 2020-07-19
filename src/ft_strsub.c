/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumbi <rumbi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 16:20:23 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/19 16:08:50 by rumbi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	v;

	str = (char*)malloc(sizeof(char) * len + 1);
	v = 0;
	if (!s)
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (v < len)
	{
		str[v] = s[start + v];
		v++;
	}
	str[v] = '\0';
	return (str);
}
