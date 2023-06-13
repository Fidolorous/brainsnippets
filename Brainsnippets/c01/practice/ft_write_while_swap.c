/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_while_swap.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <ggyevi-s@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 08:36:46 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/13 08:58:53 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

// creating write function to variable: c
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// creating while function to print alphabet using ascii code for the letters

void	ft_while(void)
{
	char	z;
	z = 96;
	while(++z<= 122)
	{
		ft_putchar(z);
	}
}

int	main()
{
	ft_while();
}
