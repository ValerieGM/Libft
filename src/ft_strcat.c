/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumbi <rumbi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 08:45:48 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/19 16:08:50 by rumbi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t dest_len;
	size_t v;

	v = 0;
	dest_len = ft_strlen(dest);
	while (src[v])
	{
		dest[dest_len] = src[v];
		v++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
