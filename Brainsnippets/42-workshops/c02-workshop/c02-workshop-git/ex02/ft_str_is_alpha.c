/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <ggyevi-s@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:22:38 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/21 12:47:04 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 97 && *str <= 122) || (*str >= 65 && *str <= 90))
			++str;
		else
			return (0);
	}	
	return (1);
}
/*
int	main()
{
	printf("%d\n", ft_str_is_alpha("test"));
}
*/
