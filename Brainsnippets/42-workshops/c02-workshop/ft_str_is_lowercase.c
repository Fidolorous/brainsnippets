/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:38:51 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/21 18:02:02 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if ((*str >= 97 && *str <= 122))
		      	++str;
	else 
		return (0);
	}
	
	return (1);
}

int	main()
{
	printf("%d\n", ft_str_is_lowercase("lowerAase"));
}
