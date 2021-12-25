#include <stdio.h>
int lcm(int a, int b);
int main()
{
    int a, b, LCM;
    printf("Enter any two numbers to find LCM: ");
    scanf("%d%d", &a, &b); 
    if(a > b)
        LCM = lcm(b, a);
    else
        LCM = lcm(a,b);
        
    printf("LCM of %d and %d = %d", a, b, LCM);
    
    return 0;
}



int lcm(int a, int b)
{
    static int multi = 0;
    multi += b;
    if((multi % a == 0) && (multi % b == 0))
    {
        return multi;
    }
    else 
    {
        return lcm(a, b);
    }
}
