/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <ggyevi-s@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:42:45 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/13 18:02:57 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int x;
	int y;
	int c;
	x = 4;
	y = 2;
	
	
	char x1;
	char y2;
	x1 = y + '0';
	y2 = x + '0';
	
	ft_swap(&x, &y);

	write(1, &x1, 1);
	write(1, "\n", 1);
	write(1, &y2, 1);
}
