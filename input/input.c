#include <stdio.h>

// int main()
// {
//     char a = getchar();

//     printf("You entered: %c", a);

//     return 0;
// }

// int main()
// {
//     int a;
//     scanf_s("%d", &a);
//     printf("You entered: %d", a);
//     return 0;
// }

int main()
{
    int a, b;
    printf("Enter two numbers:");
    scanf_s("%d %d", &a, &b);
    printf("\nSum: %d", a + b);
    return 0;
}