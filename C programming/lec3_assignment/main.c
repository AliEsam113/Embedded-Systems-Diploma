#include <stdio.h>

int main() {

    int a,b,temp;
    printf("Enter value of a \n");
    scanf("%d",&a);
    printf("Enter value of b \n");
    scanf("%d",&b);
    //this is swap program using temp variable
    /*
    temp=b;
    b=a;
    a=temp;
    printf("\n");
     */
    //this is swap program without using temp variable
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping, value of a = %d\n",a);
    printf("After swapping, value of b = %d",b);
    //overloaded




    return 0;
}
