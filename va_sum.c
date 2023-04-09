#include <stdarg.h>
#include <stdio.h>

int sum(int count, ...)
{
    int total = 0;
    va_list args;
    va_start(args, count);

    int i = 0;
    while (i < count)
    {
        total += va_arg(args, int);
        i++;
    }

    va_end(args);
    return total;
}
int main()
{
    printf("%d",sum(3, 1, 2, 3)); // çıktı: 6
}