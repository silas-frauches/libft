/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sida-sil <sida-sil@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 06:29:25 by sida-sil          #+#    #+#             */
/*   Updated: 2025/10/29 06:29:30 by sida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*pointer;
	int		size;

	size = ft_strlen(s1) + 1;
	pointer = malloc(size * sizeof(char));
	if (pointer == NULL)
		return (NULL);
	ft_strlcpy(pointer, s1, size);
	return (pointer);
}
