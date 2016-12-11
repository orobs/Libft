/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:34:50 by orazafin          #+#    #+#             */
/*   Updated: 2016/12/11 20:12:21 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char		*string_1;
	unsigned const char		*string_2;
	size_t					i;
	
	if (n == 0)
		return (0);
	string_1 = (unsigned const char*)s1;
	string_2 = (unsigned const char*)s2;
	i = 0;
	while (((i < n) && (string_1[i] && string_2[i])))
	{
		if (string_1[i] != string_2[i])
			return ((unsigned char)string_1[i] - string_2[i]);
		i++;
	}
	return (0);
}
