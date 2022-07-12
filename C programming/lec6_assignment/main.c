#include <stdio.h>

int check_prime(int number);
int factorial(int number);
void reverse();
int power(int number , int n);
int main() {
    int upper_limit,lower_limit;
    int flag;
    printf("Enter the two intervals \n");
    scanf("%d %d",&lower_limit,&upper_limit);
    printf("prime numbers between %d and %d are \n ",lower_limit,upper_limit);
    for (int i = lower_limit+1; i < upper_limit; ++i)
    {
        flag= check_prime(i);
        if(flag==0)
            printf("%d\n",i);
    }
    printf("Factorial of 5 is %d\n", factorial(5));
    printf("Enter a sentence \n");
    reverse();
    printf("power of 5 to 2 is %d \n", power(5,2));


    return 0;
}
int check_prime(int num)
{
    int flag=0;
    for (int i = 2; i <num/2 ; ++i)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}
int factorial(int number)
{
    if(number==1)
        return 1;
    else
        return number*factorial(number-1);
}
void reverse()
{
    char c;
    scanf("%c",&c);
    if(c!='\n') {
        reverse();
        printf("%c", c);
    }

}
int power(int number , int n)
{
    if(n!=0)
    {
        return number* power(number,n-1);
    }
    else
        return 1;
}