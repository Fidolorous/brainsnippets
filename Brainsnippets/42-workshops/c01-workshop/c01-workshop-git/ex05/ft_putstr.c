/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:48:05 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/14 19:26:00 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{	
		write(1, str, 1);
		str++;
	}
}
/*
int	main(void)
{	
	char	*c;

	c = "Helloooooooooooooooooooooooooooooooooooooooo";
	ft_putstr(c);
}
*/
