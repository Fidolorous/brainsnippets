/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:52:42 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/21 17:37:26 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create a function that returns 1 if the string given as a parameter contains only
//digits, and 0 if it contains any other character.

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= '0' && *str <= '9'))
			++str;
	else
		return (0);
	}
	return	(1);	
}

int	main()
{
	printf("%d\n", ft_str_is_numeric("901"));
}
