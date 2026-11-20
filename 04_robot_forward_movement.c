#include <stdio.h>

int main(void)
{
    int i, steps;

    printf("Robot Forward Movement Simulation\n");
    printf("Enter the number of steps: ");
    scanf("%d", &steps);

    for (i = 1; i <= steps; i++)
    {
        printf("Robot moved forward by step %d\n", i);
    }

    return 0;
}
