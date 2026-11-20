#include <stdio.h>

int main(void)
{
    float speed;
    float threshold = 60.0f;
    float overspeed = 100.0f;

    printf("Enter speed: ");
    scanf("%f", &speed);

    if (speed <= threshold)
    {
        printf("Status: Normal Speed\n");
    }
    else if (speed <= overspeed)
    {
        printf("Status: High Speed\n");
    }
    else
    {
        printf("Status: Overspeed\n");
    }

    return 0;
}
