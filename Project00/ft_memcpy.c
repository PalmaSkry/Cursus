/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaramar <mtaramar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:47:17 by mtaramar          #+#    #+#             */
/*   Updated: 2024/10/01 14:31:38 by mtaramar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *d = (char*)dest;
    char *s = (const char*)src;
    
    i = 0;
    while(src[i] != '\0')
    {
        d[i] = s[i]
        i++;
    }
    return(dest);
}