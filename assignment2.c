#include <stdio.h>

int main()
{
    int n, flag = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if(flag==0)
    {
        printf("The entered number is a Prime Number");
    }
    else
    {
        printf("The entered number is not a Prime Number");
    }

    return 0;
}