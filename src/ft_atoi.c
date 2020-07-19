/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumbi <rumbi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 08:42:50 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/19 16:08:50 by rumbi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int		ft_atoi(const char *str)
{
	long			res;
	long			sign;
	int				len;

	sign = 1;
	res = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\r' || *str == '\v' || *str == '\f' || *str == '0')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	len = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str++ - '0';
		len++;
	}
	if (len > 19 && sign > 0)
		return (-1);
	if (len > 19 && sign < 0)
		return (0);
	return ((int)(res * sign));
}
