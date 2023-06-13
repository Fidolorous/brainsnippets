#include<unistd.h>
#include<stdio.h>

void	ft_ft(int *v)
{
	*v=42;
	printf("tf_tf %i\n %i fldsfkldsfj %i", *v, *v, *v);        
}

void ft_ft2(int v)
{
	v=5;
	printf("tf_tf2 %i\n", v);
}	

int	main(void)
{
	int v;
	v = 3;

	ft_ft2(v);
	printf("main %i\n",  v);
	ft_ft(&v);
	printf("main %i\n", v);
}

