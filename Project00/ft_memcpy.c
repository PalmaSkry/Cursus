/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaramar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:47:17 by mtaramar          #+#    #+#             */
/*   Updated: 2024/10/02 09:19:45 by mtaramar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d = (char*)dest;
	char	*s = (const char*)src;
	
	i = 0;
	while (src[i] != '\0')
	{
		d[i] = s[i]
			i++;
	}
	return (dest);
}
