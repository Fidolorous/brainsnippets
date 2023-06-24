/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:18:43 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/21 21:29:53 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strlowcase(char *str)
{
        int     i;  

        i = 0;
        while (str[i])
        {
                if (str[i] >= 62 && str[i] <= 90)
                        str[i] += 32; 
                ++i;
        }
        return (str);
}

int     main()
{
        char str[] = "THISISLOWERCASE";
        printf("%s\n", ft_strlowcase(str));
}

	
