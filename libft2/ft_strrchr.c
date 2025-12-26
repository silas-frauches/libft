/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sida-sil <sida-sil@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 06:32:15 by sida-sil          #+#    #+#             */
/*   Updated: 2025/10/29 06:54:55 by sida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	str;

	str = (unsigned char)c;
	i = ft_strlen(s);
	while (1)
	{
		if ((unsigned char)s[i] == str)
			return ((char *)&s[i]);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
