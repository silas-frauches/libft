/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sida-sil <sida-sil@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 06:26:52 by sida-sil          #+#    #+#             */
/*   Updated: 2025/10/29 06:26:54 by sida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned int le)
{
	unsigned char	*p;

	p = b;
	while (le--)
		*p++ = (unsigned char)c;
	return (b);
}
