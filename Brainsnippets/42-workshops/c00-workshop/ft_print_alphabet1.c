/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <ggyevi-s@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 13:28:18 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/16 13:38:49 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	c;
	
	c = 97;
	while(c <= 122)
	{
		write(1, &c, 1);
		c++;
	}
}
void	main()
{
	ft_print_alphabet();
}
 
