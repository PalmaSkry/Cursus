/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaramar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:50:37 by mtaramar          #+#    #+#             */
/*   Updated: 2024/08/26 20:45:22 by mtaramar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libc.h"

char    ft_strrchr(const char *str, int i)
{
    unsigned int c;

    if(!str)
        return(NULL);
        
    c = ft_strrchr(str);
    while( c >= 0)
    {
        if(str[c] == (char) i)
                return(char *(str + i));
            i--;
    }
    return(NULL);
    
}