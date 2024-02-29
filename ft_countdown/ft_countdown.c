#include <unistd.h>

int main()
{
    char a = '9';
    char* pA = &a;

    while (*pA >= '0')
    {
        write(1, &a, 1);
        *pA = *pA - 1;
    }
    write(1, "\n", 1);
}