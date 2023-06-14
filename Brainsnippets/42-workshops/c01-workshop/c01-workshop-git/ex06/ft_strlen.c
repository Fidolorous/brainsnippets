/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:31:13 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/14 19:50:52 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count))
		++count;
	return (count);
}
/*
int 	main(void)
{	
	char	*m;

	m = "macska";
	printf("%d\n", ft_strlen(m));
}
*/
