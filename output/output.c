#include <stdio.h>

// int main()
// {
//     char a = getchar();
//     printf("You entered: ");
//     putchar(a);
//     return 0;
// }

// int main()
// {
//     char a[100];

//     fgets(a, sizeof(a), stdin);

//     printf("You entered: ");

//     puts(a);

//     return 0;
// }

// int main()
// {
//     int a;
//     scanf("%d", &a);
//     printf("You entered: %d", a);
//     return 0;
// }

// int main()
// {
//     int a, b;
//     printf("Enter two numbers:");
//     scanf("%d %d", &a, &b);
//     printf("\nSum: %d", a + b);
//     return 0;
// }

int main()
{
    int x, y;
    char text[20];
    scanf("%2d %d %*f %2s", &x, &y, text);
    printf("%d %d %s", x, y, text);
    return 0;
}