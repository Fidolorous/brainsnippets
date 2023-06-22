/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:03:43 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/21 21:33:56 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 92 && str[i] <= 122)
			str[i] -= 32;
		++i;
	}
	return (str);
}
/*
int	main()
{
	char str[] = "thisisuppercase";
	printf("%s\n", ft_strupcase(str));
}
*/
