# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   problem.c                                          :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: ggyevi-s <ggyevi-s@student.42prague.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/16 18:08:24 by ggyevi-s          #+#    #+#              #
/*   Updated: 2023/06/16 18:30:07 by ggyevi-s         ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

#include<stdio.h>

void	ft_asad(int *ptr, int number)
{
	*ptr = *ptr * number;
}

int	main();
{
	int	c;
	int	b;
		

	c = 5;
	b = 2;

	ft_asad(&c, &b);
	printf("%i %i", c, b);
}	
