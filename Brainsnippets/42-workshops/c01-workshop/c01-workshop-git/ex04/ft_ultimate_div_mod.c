/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:51:33 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/14 17:47:09 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	if (b)
	{
		c = *a / *b;
		*b = *a % *b;
		*a = c;
	}
}
/*
int	main(void)

{
	int	a;
	int	b;

	a = 10;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("division:%i \nremainder:%i", a, b);
}
*/
