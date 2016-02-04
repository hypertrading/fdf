/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:57:28 by vklepper          #+#    #+#             */
/*   Updated: 2015/11/29 18:52:30 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
		i++;
	}
	return (dst);
}
