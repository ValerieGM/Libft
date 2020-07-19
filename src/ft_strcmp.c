/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumbi <rumbi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 08:47:00 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/19 16:08:50 by rumbi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned int v;

	v = 0;
	while (s1[v] || s2[v])
	{
		if (s1[v] != s2[v])
			return ((unsigned char)s1[v] - (unsigned char)s2[v]);
		v++;
	}
	return (0);
}
