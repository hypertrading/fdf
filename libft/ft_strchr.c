/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:39:42 by vklepper          #+#    #+#             */
/*   Updated: 2015/11/29 22:03:05 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*search;

	i = 0;
	search = (char *)s;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (&search[i]);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return (&search[i]);
	return (NULL);
}
