/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaramar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:19:17 by mtaramar          #+#    #+#             */
/*   Updated: 2024/10/02 09:19:55 by mtaramar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strchr(const char *str, int i)
{
	while (*str)
	{
		if (*str == i)
			return ((char *)str);
		str++;
	}
	if (i == '\0')
		return ((char *)str);
	return (0);
}
