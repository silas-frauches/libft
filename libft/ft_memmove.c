/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sida-sil <sida-sil@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 06:26:37 by sida-sil          #+#    #+#             */
/*   Updated: 2025/10/29 06:26:39 by sida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int n)
{
	unsigned int		i;
	unsigned char		*dest;
	const unsigned char	*sorc;

	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	i = 0;
	if (!dest && !sorc)
		return (NULL);
	if (sorc < dest)
	{
		while (++i <= n)
			dest[n - i] = sorc[n - i];
		return (dst);
	}
	while (n-- > 0)
		*dest++ = *sorc++;
	return (dst);
}
