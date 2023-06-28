/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsinagl <vsinagl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:25:10 by pibouill          #+#    #+#             */
/*   Updated: 2023/06/24 23:45:22 by vsinagl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

// void	ft_error(void)
// {
// 	write(2, "Dict Error\n", 11);
// 	exit (1);
// }

// char	*ft_get_key(int fd)
// {
// 	char	cursor[1];
// 	char	*ret;
// 	int		i;

// 	ret = malloc(sizeof(char) * (?size?));
// 	if (ret == NULL)
// 		exit (1);
// 	i = 0;
// 	// read(fd, cursor, 1);
// 	while (cursor[0] == '\n')
// 		read(fd, cursor, 1);
// 	while (cursor[0] >= '0' && cursor[0] <= '9')
// 	{
// 		ret[i] = cursor[0];
// 		read(fd, cursor, 1);
// 		i++;
// 	}
// 	return (ret);
// }

// t_dict	ft_parse_dict(char *file_path)
// {
// 	int		i;
// 	char	cursor[1];
// 	t_dict	*ret;
// 	int		fd;ret[i].key
// 	i = 0;
// 	while (i < 32)
// 	{
// 		ret[i].key = ft_atoi(ft_get_key(fd));
// 		read(fd, cursor, 1);
// 		while (cursor[0] >= '0' && cursor[0] <= '9')
// 			read(fd, cursor, 1);
// 		while (cursor[0] == ' ')
// 			read(fd, cursor, 1);
// 		if (cursor[0] == ':')
// 			read(fd, cursor, 1);
// 		while (cursor[0] == ' ')
// 			read(fd, cursor, 1);
// 		ret[i].value = ft_get_value(fd);
// 	}
// }


// t_dict	*dic_test(void)
// {
// 	//open file
// 	//read file and create array of structures
// 	t_dict dict_test[] = {{ 0, "zero" },     { 1, "one" },         { 2, "two" },
//     { 3, "three"},    { 4, "four" },        { 5, "five" },
//     { 6, "six" },      { 7, "seven" },       { 8, "eight" },
//     { 9, "nine" },     { 10, "ten" },        { 11, "eleven" },
//     { 12, "twelve" },  { 13, "thirteen" },   { 14, "fourteen" },
//     { 15, "fifteen" }, { 16, "sixteen" },    { 17, "seventeen" },
//     { 18, "eighteen" },{ 19, "nineteen" },   { 20, "twenty" },
//     { 30, "thirty" },  { 40, "forty" },      { 50, "fifty" },
//     { 60, "sixty" },   { 70, "seventy" },    { 80, "eighty" },
//     { 90, "ninety" },  { 100, "hundred" },   { 1000, "thousand" },
//     { 1000000, "million" }, { 1000000000, "billion" }};
//     return(dic_test);
// }

void	rush(int nb, char *adress)
{
	t_dict dict[] = {{ 0, "zero" },     { 1, "one" },         { 2, "two" },
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
	//function for opening file, reading and creating the dictionaries
	// int count = sizeof(dict)/ sizeof(dict[0]);
	// printf("the number of elements in dictionary is: %i\n", count);
	adress++;
	ft_nbr_conversion(nb, dict,32);
	write(1, "\n", 1);
}