/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:13:06 by vklepper          #+#    #+#             */
/*   Updated: 2015/11/30 21:59:47 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = (char *)malloc((ft_strlen(s1) + 1) * (sizeof(char)));
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	return (str);
}
