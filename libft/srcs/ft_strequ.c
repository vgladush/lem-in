/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgladush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 19:51:21 by vgladush          #+#    #+#             */
/*   Updated: 2017/10/31 19:51:22 by vgladush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t i;

	i = 0;
	if (s1 && s2)
	{
		if (s1[i] != s2[i])
			return (0);
		while (s1[i] || s2[i])
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
	}
	return (1);
}
