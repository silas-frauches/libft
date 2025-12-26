/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sida-sil <sida-sil@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 06:19:29 by sida-sil          #+#    #+#             */
/*   Updated: 2025/10/29 06:19:35 by sida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int count, unsigned int size)
{
	void	*pointer;

	pointer = malloc(count * size);
	if (pointer == NULL)
		return (pointer);
	ft_bzero(pointer, size * count);
	return (pointer);
}
