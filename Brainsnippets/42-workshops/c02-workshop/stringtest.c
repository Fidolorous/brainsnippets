/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringtest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:20:05 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/24 14:27:19 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_2d_array(char **str, int size)
{
	int	i;
	int	y;

	i = 0;
	
	while(i < size)
	{	
		y = 0;
		while(str[i][y] != '\0')
		{
			write(1, &str[i][y], 1);
			y++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int main()
{
	char *str[] = {"one", "hundred", "twenty", "two"};
	int size = sizeof(str) / sizeof(str[0]);

	print_2d_array(str, size);

	return 0;
}
