/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <ggyevi-s@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:22:38 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/21 12:31:23 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create a function that returns 1 if the string given as a parameter contains only
//alphabetical characters, and 0 if it contains any other character.

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
// in this case we will directly add the null value to the *str, not creating 
//seperate int

	while (*str != '\0')
	{
		if ((*str >= 97 && *str <= 122) || (*str >= 65 && *str <= 90))
			++str;
	else
		return (0);
	}
		
	return (1);
}

int	main()
{
	printf("%d\n", ft_str_is_alpha(.)	
