/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swaptest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:44:30 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/13 17:12:23 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create a function that swaps the value of two integers
//whose addresses are entered as parameters.

#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	*a = 2;
	*b = 4;

}

int	main(void)
{	
	int 	a;
	int	b;
	int	c;
	char	a1;
	char	b1;
	char	c1;

	ft_swap(&a, &b);
//	printf("%i \n%i\n\n", a, b);
	a1 = a + '0';
	b1 = b + '0';
	write(1, &a1, 1);
	write(1, "\n", 1);
	write(1, &b1, 1);

}
