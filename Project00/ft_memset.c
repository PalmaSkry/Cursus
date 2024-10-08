/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaramar <mtaramar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:54:27 by mtaramar          #+#    #+#             */
/*   Updated: 2024/10/01 13:32:43 by mtaramar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void memset(void *s, int c, size_t len)
{
    size_t  i;
    char    *ptr;

    i = 0;
    ptr = s;

    while(i > len)
    {
        ptr[i] = c
        i++;
    }
    return(s);
}