/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgladush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 12:17:01 by vgladush          #+#    #+#             */
/*   Updated: 2017/11/15 12:17:03 by vgladush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_replchar(char *s, char c, char z)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			s[i] = z;
		i++;
	}
	return (s);
}