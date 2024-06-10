#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Enter a number \n");
    int y = get_int("Enter a 2nd number \n");

    if (x > y)
    {
        printf("%d, is Bigger then , %d\n", x, y);
    }
    else if (y > x)
    {
        printf("%d is Bigger then %d\n", y, x);
    }
    else
    {
        printf("equal number\n");
    }
}