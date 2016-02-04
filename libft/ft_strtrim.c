/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:56:55 by vklepper          #+#    #+#             */
/*   Updated: 2015/12/15 15:28:27 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_pimp_my_strcpy(const char *str, char *dest, int i, int k)
{
	int	j;

	j = 0;
	while (k <= i)
	{
		dest[j] = str[k];
		k++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char		*ft_strtrim(const char *str)
{
	char	*dest;
	int		i;
	int		k;

	i = 0;
	if (str[i] == '\0')
		return (ft_strdup("\0"));
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
	{
		i++;
		if (str[i] == '\0')
			return (ft_strdup("\0"));
	}
	k = i;
	while (str[i] != '\0')
		i++;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\0')
		i--;
	dest = (char *)malloc((i - k + 2) * (sizeof(char)));
	if (dest == 0)
		return (0);
	dest = ft_pimp_my_strcpy(str, dest, i, k);
	return (dest);
}
