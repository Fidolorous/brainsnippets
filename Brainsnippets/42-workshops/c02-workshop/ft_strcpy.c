/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:31:40 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/21 10:30:17 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

//destination and source will be both pointers

char 	*ft_strcpy(char *dest, char *src)
{

//we create an integer which will take the value of our input
	int	i;

	i = 0;

//we create a while condition, to submit the END/NULL of the string, without this it wouldn't work, also we submit the source and put 'i' in square brackets.
//square brackets basically an array.

	while(src[i] != '\0')
	{
		dest[i] == src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}		

int	main()
{
	//we give value to the chars
	//ask someone the logic of what being printed
	char	a[] = "b";
	char	b[] = "c";

	printf("%s\n", ft_strcpy(a, b));
}
