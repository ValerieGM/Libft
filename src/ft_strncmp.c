/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <vgongora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 16:19:07 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/19 22:03:08 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t v;

	v = 0;
	if (n == 0)
		return (0);
	while (v < n)
	{
		if (s1[v] != s2[v] || s1[v] == '\0' || s2[v] == '\0')
			return ((unsigned char)s1[v] - (unsigned char)s2[v]);
		v++;
	}
	return (0);
}
