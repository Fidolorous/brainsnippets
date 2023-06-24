/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:54:01 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/21 19:01:46 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 32 && *str <= 127))
			++str;
	else
		return (0);
	}

	return (1);
}

int	main()
{
	printf("%d\n", ft_str_is_printable("THISISPRINTABLE"));
}
