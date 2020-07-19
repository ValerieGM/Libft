/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumbi <rumbi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 09:07:00 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/19 16:08:50 by rumbi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strtrim(char const *s)
{
	int		t;
	int		u;
	int		v;
	char	*str;

	t = 0;
	u = -1;
	if (!s)
		return (NULL);
	while (s[t] == ' ' || s[t] == '\n' || s[t] == '\t')
		t++;
	if (s[t] == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));
	v = ft_strlen(s) - 1;
	while (s[v] == ' ' || s[v] == '\n' || s[v] == '\t')
		v--;
	str = (char *)malloc(sizeof(char) * (v - t + 2));
	if (str == NULL)
		return (NULL);
	while (++u < v - t + 1)
		str[u] = s[t + u];
	str[u] = '\0';
	return (str);
}
