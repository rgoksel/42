/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfutils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:40:48 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/18 16:40:59 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int printchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int printstr(char *s)
{
    int len;

    len = 0;
    while (*s)
        len += printchar(*s++);
    return (len);
}

int printnbr(long long int nbr, int base, int b)
{
    int             len;
    char            *basestr;
    char            *basestr2;

    basestr = "0123456789ABCDEF";
    basestr2 = "0123456789abcdef";

    len = 0;
    if (nbr < 0)
    {
        len += printchar('-');
        nbr *= -1;
    }
    if (nbr > 9) 
        len += printnbr(nbr/base, base, b);
    if (b == 1)
        len += write(1, &basestr[nbr%base], 1);
    else 
        len += write(1, &basestr2[nbr%base], 1);
    return (len);
}

#include <stdio.h>
int main()
{
    int *p;
    
    printf("%p\n", p);
    printnbr((long long int)p, 16, 1);
    //printnbr(long long int nbr, int base, int b)
}

