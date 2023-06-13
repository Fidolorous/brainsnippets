#include <unistd.h>

void ft_putstr(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    write(1, str, len);
}

int main(void)
{
    char *word = "Hello, world!";
    ft_putstr(word);
    return 0;
}
