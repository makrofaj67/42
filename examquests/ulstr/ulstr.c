#include <unistd.h>

void ft_ulstr(char *str)
{
    while(*str)
    {
    if (*str >= 'A' && *str <= 'Z')
        *str = *str + 32;
    else if (*str >= 'a' && *str <= 'z')
        *str = *str - 32;
    write(1, str, 1);
    str++;
    }
    write(1, "\n", 1);
}


int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    else
        ft_ulstr(argv[1]);
}
