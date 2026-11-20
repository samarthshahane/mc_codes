#include <stdio.h>

int main(void)
{
    char name[20];

    printf("Enter your name: ");
    scanf("%19s", name);

    printf("Hello Robotics!\n");
    printf("Welcome %s\n", name);

    return 0;
}
