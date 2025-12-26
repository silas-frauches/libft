/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sida-sil <sida-sil@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 06:25:59 by sida-sil          #+#    #+#             */
/*   Updated: 2025/10/29 07:08:22 by sida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned char	*dest;
	unsigned char	*srce;

	if (!dst && !src)
		return (NULL);
	dest = dst;
	srce = src;
	while (n--)
		*dest++ = *srce++;
	return (dst);
}
