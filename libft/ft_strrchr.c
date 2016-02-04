/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 20:55:40 by vklepper          #+#    #+#             */
/*   Updated: 2015/11/29 22:16:29 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	int				found;
	char			*search;

	i = 0;
	found = -1;
	search = (char *)s;
	while (i <= ft_strlen(search))
	{
		if (s[i] == (char)c)
			found = i;
		i++;
	}
	if (found != -1)
		return (&search[found]);
	return (NULL);
}
