#include <stdio.h>

int main()
{
    int a, b = 1, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    while (b <= 10)
    {
        c = a * b;
        printf("%d X %d = %d\n", a, b, c);
        b++;
    }

    return 0;
}
