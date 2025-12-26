/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sida-sil <sida-sil@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 06:31:55 by sida-sil          #+#    #+#             */
/*   Updated: 2025/10/29 06:31:56 by sida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	if (n == 0 && !*s2)
		return ((char *)s1);
	if (n == 0)
		return (NULL);
	if (!*s2)
		return ((char *)s1);
	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		while (s2[j] == s1[i + j] && i + j < n)
			if (!s2[++j])
				return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
