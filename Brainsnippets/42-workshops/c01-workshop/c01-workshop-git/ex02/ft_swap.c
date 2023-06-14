/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swaptest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:44:30 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/13 22:28:05 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create a function that swaps the value of two integers
//whose addresses are entered as parameters.

#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	empty;

	empty = *a;
	*a = *b;
	*b = empty;
}
/*
int	main(void)
{	
	char	a1;
	char	b1;
	int		a;
	int		b;

	a = 4;
	b = 2;
	ft_swap(&a, &b);
	a1 = a + '0';
	b1 = b + '0';
	write(1, &a1, 1);
	write(1, "\n", 1);
	write(1, &b1, 1);
}
*/
