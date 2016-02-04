/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:21:27 by vklepper          #+#    #+#             */
/*   Updated: 2015/11/29 18:47:46 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*str;
	char			*temp_src;

	i = 0;
	str = (char *)dst;
	temp_src = (char *)src;
	while (i < n)
	{
		str[i] = temp_src[i];
		if (str[i] == c)
		{
			return (&dst[i + 1]);
		}
		i++;
	}
	return (NULL);
}
