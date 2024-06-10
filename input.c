#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int myAge;
    string name = get_string("whats Your name\n ");
    // int age = get_int("whats your Age\n");
    printf("Whats your Age\n");
    scanf("%d", &myAge);
    printf("You Are %d years old\n", myAge);
    // printf("you are %s years old\n", age);
}
