/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:37:25 by orazafin          #+#    #+#             */
/*   Updated: 2016/12/06 14:50:55 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while ((to_find[j] == str[i + j]) && ((i + j) < n))
		{
			j++;
			if (to_find[j] == '\0')
				return ((char*)str + i);
		}
		i++;
	}
	return (NULL);
}
