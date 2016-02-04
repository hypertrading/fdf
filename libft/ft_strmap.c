/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:48:59 by vklepper          #+#    #+#             */
/*   Updated: 2015/12/14 12:34:11 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*rendu;

	i = ft_strlen(s);
	rendu = (char *)malloc((i + 1) * (sizeof(char)));
	if (rendu == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		rendu[i] = f(s[i]);
		i++;
	}
	rendu[i] = '\0';
	return (rendu);
}
