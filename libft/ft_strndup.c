/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 17:27:16 by vklepper          #+#    #+#             */
/*   Updated: 2015/12/17 14:21:40 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strndup(const char *str, size_t size)
{
	char			*cpy_str;
	unsigned int	i;

	i = 0;
	cpy_str = (char*)malloc((size + 1) * sizeof(str));
	if (cpy_str == 0)
		return (NULL);
	while (i < size)
	{
		cpy_str[i] = str[i];
		i++;
	}
	cpy_str[i] = '\0';
	return (cpy_str);
}
