/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:41:11 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/16 12:02:53 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	displayfirsta(char *str)
{
	while (*str != '\0')
	{
		if (*str == 'a')
		{
			write(1, str, 1);
			str++;
		}
	}	
}

int	main(void)
{
	char	*c;

	c = "randomsomething";
	displayfirsta(c);
}
			

