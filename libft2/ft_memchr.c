/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sida-sil <sida-sil@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 06:25:45 by sida-sil          #+#    #+#             */
/*   Updated: 2025/10/29 06:25:48 by sida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*str;
	unsigned char	chr;

	str = (unsigned char *)s;
	chr = (unsigned char)c;
	while (n--)
	{
		if (*str == chr)
			return ((unsigned char *)str);
		str++;
	}
	return (0);
}
