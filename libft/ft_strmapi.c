/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:53:52 by vklepper          #+#    #+#             */
/*   Updated: 2015/12/14 12:34:34 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		rendu[i] = f(i, s[i]);
		i++;
	}
	rendu[i] = '\0';
	return (rendu);
}
