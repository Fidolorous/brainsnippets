/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <ggyevi-s@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:35:56 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/13 23:25:16 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	x;
	x = 33;
	int	low;
	int	high;
	low = x%10;
	high = x/10;
	char	putchar;	
	putchar(low + 0x30);

	ft_ft (&x);
	char buf[]= {'0'+(x/10)%10, '0'+x%10};
	write(1,buf,2);
}
