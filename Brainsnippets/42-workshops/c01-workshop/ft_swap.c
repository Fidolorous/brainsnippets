/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <ggyevi-s@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:42:45 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/12 16:59:40 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
	printf("int %i\n", *a);
	printf("int %i\n", *b);
}

int	main(void)
{
	int x;
	int y;
	x = 4;
	y = 2;
	ft_swap(&x, &y);
}
