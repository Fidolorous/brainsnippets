/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsinagl <vsinagl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:51:06 by vsinagl           #+#    #+#             */
<<<<<<< HEAD:ex00/includes/test.c
/*   Updated: 2023/06/24 19:02:43 by ggyevi-s         ###   ########.fr       */
=======
/*   Updated: 2023/06/24 20:18:18 by vsinagl          ###   ########.fr       */
>>>>>>> da8268ba38a88a74a9d8a6179d15defd817b8a9b:ex00/srcs/test.c
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include <stdio.h>

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	lenstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

char	*ft_strndup(char *src, int n)
{
	char	*new;
	int		i;

	i = -1;
	new = (char *)malloc(sizeof(char) * (n + 1));
	if (new == NULL)
		return (NULL);
	while (++i < n)
		new[i] = src[i];
	new[i] = '\0';
	return (new);
}

int	find_biggest(t_dict *dict, int size)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (i<size)
	{
		if (dict[i].key > nb)
			nb = dict[i].key;
		i++;
	}
	return (nb);
}



void	print_in_dict(t_dict *dict, int number, int size)
{
	int	i;
	char	*str;

	i = 0;
	while (i < size)
	{
		if (dict[i].key == number)
		{
			str = ft_strndup(dict[i].value, lenstr(dict[i].value));
			print_str(str);
			free(str);
			return;
		}
		i++;
	}
	write(1, "Error, printing order\n",22);
}

void	function(int nb)
{



	//fce:
	t_dict dict_test[] = {{ 0, "zero" },     { 1, "one" },         { 2, "two" },
    { 3, "three"},    { 4, "four" },        { 5, "five" },
    { 6, "six" },      { 7, "seven" },       { 8, "eight" },
    { 9, "nine" },     { 10, "ten" },        { 11, "eleven" },
    { 12, "twelve" },  { 13, "thirteen" },   { 14, "fourteen" },
    { 15, "fifteen" }, { 16, "sixteen" },    { 17, "seventeen" },
    { 18, "eighteen" },{ 19, "nineteen" },   { 20, "twenty" },
    { 30, "thirty" },  { 40, "forty" },      { 50, "fifty" },
    { 60, "sixty" },   { 70, "seventy" },    { 80, "eighty" },
    { 90, "ninety" },  { 100, "hundred" },   { 1000, "thousand" },
    { 1000000, "million" }, { 1000000000, "billion" }};


	int size = 32;
	int order;
	//print_in_dict(dict_test,1000, 3);
	//printf("\n");
	int division;
	int i = 0;
	if (nb == 0)
		print_in_dict(dict_test, 0,size);
	while(nb != 0  || i == 0)
	{
		order = dict_test[size - 1 - i].key;
		division =  nb / order;
		if (division == 1 && nb < 100)
		{
			print_in_dict(dict_test, order,size);
			write(1, " ",1);
			nb = nb % order;
		}
		else if (division == 1 && nb >= 100)
		{
			print_in_dict(dict_test, 1, size);
			write(1, " ",1);
			print_in_dict(dict_test, order, size);
			write(1, " ",1);
			nb = nb % order;
		}
		else if (division >1)
		{
			function(division);
			print_in_dict(dict_test, order,size);
			write(1, " ",1);
			nb = nb % order;
		}
		i ++;
	}
}

int	main(void)
{
<<<<<<< HEAD:ex00/includes/test.c
	int number = 999899998; 
=======
	int number = 42;
>>>>>>> da8268ba38a88a74a9d8a6179d15defd817b8a9b:ex00/srcs/test.c

	function(number);
	return(0);

}
