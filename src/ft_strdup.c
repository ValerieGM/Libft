/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <vgongora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 08:47:42 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/19 22:03:08 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	char *str;

	str = (char *)malloc(sizeof(*str) * ft_strlen(s) + 1);
	if (str != NULL)
		ft_strcpy(str, s);
	return (str);
}
