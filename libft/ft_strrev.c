/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 15:46:49 by vklepper          #+#    #+#             */
/*   Updated: 2015/12/15 15:48:46 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *str)
{
	char	c;
	int		i;
	int		l;

	l = ft_strlen(str);
	i = 0;
	while (i < l / 2)
	{
		c = str[i];
		str[i] = str[l - i - 1];
		str[l - i - 1] = c;
		i++;
	}
	return (str);
}
