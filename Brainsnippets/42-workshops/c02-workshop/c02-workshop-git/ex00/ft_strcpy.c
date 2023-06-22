/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:31:40 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/21 12:50:45 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] == src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}		

/*
int	main()
{
	//we give value to the chars
	//ask someone the logic of what being printed
	char	a[] = "b";
	char	b[] = "c";

	printf("%s\n", ft_strcpy(a, b));
}
*/
