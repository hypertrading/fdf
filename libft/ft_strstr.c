/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 21:07:13 by vklepper          #+#    #+#             */
/*   Updated: 2015/11/29 15:01:32 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char			*src;
	unsigned int	i;

	src = (char *)s1;
	if (s2[0] == 0)
		return (src);
	i = 0;
	while (src[i] != '\0')
	{
		if (ft_strncmp(&s1[i], s2, ft_strlen(s2)) == 0)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
