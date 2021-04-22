#include <stdio.h>
 
int lcm(int, int);
 
int main()
{
    int a, b, result;
    int prime[100];
 
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    result = lcm(a, b);
    printf("The LCM of %d and %d is %d\n", a, b, result);
    return 0;
}
 
int lcm(int a, int b)
{ 
    static int d = 1;
 
    if (d % a == 0 && d % b == 0)
    {
        return d;
    }
    d++;
    lcm(a, b);
    return d;
}
