/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:52:03 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/26 17:03:33 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline. */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	while (argv[1][i])
	{	
		if (argv[1][i] == 'o')
		{
			write(1, "o", 1);
			break;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
