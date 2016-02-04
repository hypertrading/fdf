/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 11:44:04 by vklepper          #+#    #+#             */
/*   Updated: 2015/11/29 22:02:49 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char			*src;
	unsigned int	i;

	src = (char *)s1;
	i = 0;
	if (s2[0] == 0)
		return (src);
	while (src[i] != '\0' && ft_strlen(s2) <= n - i)
	{
		if (ft_strncmp(&s1[i], s2, ft_strlen(s2)) == 0)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
