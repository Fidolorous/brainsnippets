/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <ggyevi-s@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:25:25 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/14 13:08:44 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	if (b != '0')
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	div;
	int	mod;
	int	n;
	int	n1;

	n = 42;
	n1 = 21;
	ft_div_mod(n, n1, &div, &mod);
	printf("\n%d/%d = %d with remainder %d\n\n", n, n1, div, mod);
}
*/
