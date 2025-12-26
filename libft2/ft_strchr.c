/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sida-sil <sida-sil@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 06:29:06 by sida-sil          #+#    #+#             */
/*   Updated: 2025/10/29 06:44:59 by sida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	str;

	str = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == str)
			return ((char *)s);
		s++;
	}
	if (str == '\0')
		return ((char *)s);
	return (NULL);
}
