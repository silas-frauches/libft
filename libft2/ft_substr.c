/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sida-sil <sida-sil@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 06:32:47 by sida-sil          #+#    #+#             */
/*   Updated: 2025/10/29 07:01:08 by sida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	size_t	slen;
	size_t	n;
	char	*out;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	n = slen - start;
	if (len < n)
		n = len;
	out = (char *)malloc(n + 1);
	if (!out)
		return (NULL);
	ft_memcpy(out, s + start, n);
	out[n] = '\0';
	return (out);
}
