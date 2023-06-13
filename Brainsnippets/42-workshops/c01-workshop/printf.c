/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swaptest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:44:30 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/13 14:58:27 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create a function that swaps the value of two integers
//whose addresses are entered as parameters.
#include<stdio.h>

void	ft_swap(int a, int b)
{
	a = 1;
	b = 2;
	printf("%i \n%i", a, b);

}

int	main(void)
{	
	int 	a;
	int	b;
	ft_swap(a, b);
}
