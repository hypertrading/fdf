/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 18:55:32 by vklepper          #+#    #+#             */
/*   Updated: 2015/11/29 23:46:22 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *v_dst, const void *v_src, size_t len)
{
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)v_dst;
	src = (unsigned char *)v_src;
	dst = dst + len;
	src = src + len;
	if (dst <= src)
	{
		return (ft_memcpy(v_dst, v_src, len));
	}
	while (len != 0)
	{
		*--dst = *--src;
		len--;
	}
	return (dst);
}
