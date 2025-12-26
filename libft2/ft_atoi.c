/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sida-sil <sida-sil@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 06:18:28 by sida-sil          #+#    #+#             */
/*   Updated: 2025/10/29 06:18:47 by sida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i++] == '-')
		sign = -1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		result = (result * 10) + str[i++] - '0';
	return (result * sign);
}
