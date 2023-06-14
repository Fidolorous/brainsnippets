/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <ggyevi-s@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:35:56 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/14 10:04:06 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{	
	int	x;
	int	low;
	int	high;
	int	*nbr;

	nbr = &x;
	x = 11;
	low = x % 10;
	high = x / 10;
	x = 11;
	printf("%i \n", x);
	ft_ft(nbr);
	printf("%i", x);
}

	putchar(low+0x30);
	putchar(high+'0');

	ft_ft (&x);
	char buf[22]= {'0'+(x/10)%10, '0'+x%10, '\n'};
	write(1, buf, 3);
*/
