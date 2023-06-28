

#include "../includes/ft.h"

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

char	*ft_strcpy(char *dest, char *src)
{
	char	*first_dest;

	first_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	dest = first_dest;
	return (first_dest);
}

char	*ft_strcpy_mod(char *dest, char *src)
{
	char	*first_dest;

	first_dest = dest;
	while (*src != '\n')
	{
		printf("%c",*src);
		*dest = *src;
		dest++;
		src++;
	}
	printf("\n");
	*dest = '\0';
	dest = first_dest;
	return (first_dest);
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

char	*ft_read_file(int fd)
{
	char	*buffer;
	int		buffer_size;
	int		i;
	int		rd;

	buffer_size = 10000;
	buffer = malloc(sizeof(char) * (10000));
	if (buffer == NULL)
	{
		exit (1);
		//here add an error message
	}
	rd = read(fd, buffer, buffer_size);
	if (rd < 0)
	{
		//print erro mesage
		exit (1);
	}
	return (buffer);
}

int	number_of_structs(char *buffer)
{
	int	number;
	int 	i;

	i = 0;
	number = 0;
	while (buffer[i])
	{
		if(buffer[i] == '\n')
			number++;
		i++;
	}
	return (number);
}


t_dict	*dict_init(char *buffer, int size)
{
	int	i;
	t_dict *dict;
	int	nb;
	char *str = "value";

	dict = (t_dict *)malloc(sizeof(t_dict)*size);
	i = 0;
	int num_end = 0;
	int word_start = 0;
	while (*buffer)
	{
		if (*buffer >= '0' && *buffer <= '9' && num_end == 0)
		{
			nb =ft_atoi(buffer);
			dict[i].key = nb;
			num_end = 1;
		}
		if (*buffer == ':')
			word_start = 1;
		if (*buffer > 32 && *buffer <= 126 && word_start == 1) //searching to printable character without space
		{
			ft_strcpy_mod(dict[i].value, buffer);
			word_start = 0;
			  //there we need to add some read_string fucntion which will read all characters until it will reach space ?
		}
		if (*buffer == '\n')
		{
			i++;
			num_end = 0;
			word_start = 0;
		}
		buffer++;
	}
	return (dict);
}



int main()
{
	char *adress = "numbers.dict";
	long of = open(adress, O_RDONLY);
	if (of == -1)
		printf("Open Error\n");
	else
	{
		printf("open ok!\n");
		char *buffer = ft_read_file(of);
		//printf("%s\n",buffer);
		int a = number_of_structs(buffer);
		printf("number of structs %i\n",a);
		t_dict *dict = dict_init(buffer,a);
		int i = 0;
		while(i < a)
		{
			printf("KEY: %i VALUE: %s\n", dict[i].key, dict[i].value);
			i++;
		}
		free(buffer);
	}
	return(0);

}