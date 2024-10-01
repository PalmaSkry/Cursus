/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaramar <mtaramar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:23:02 by mtaramar          #+#    #+#             */
/*   Updated: 2024/10/01 15:36:07 by mtaramar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
        int signe;
        int resultat;

    signe = 1;
    resultat = 0;
    while(*str == ' ' || (*str >= 9 && *str <= 13))
            str++;
    if(*str == '-')
        signe = -1;
    if(*str == '-' || *str == '+')
        str++;
    while(*str >= '0' && *str <= '9')
    {
        resultat = resultat * 10 + (*str - '0');
        str++;
    }
    return(resultat * signe);
}