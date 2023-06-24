/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:38:57 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/21 18:46:34 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//Create a function that returns 1 if the string given as a parameter contains only
//uppercase alphabetical characters, and 0 if it contains any other character.

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if((*str >= 65 && *str <= 90))
			++str;
	else
		return (0);
	}
	return (1);
}

int	main()
{
	printf("%d\n", ft_str_is_uppercase("UPPER"));
}
