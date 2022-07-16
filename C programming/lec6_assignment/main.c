#include <stdio.h>
#include <math.h>
#include <string.h>
int unique(int arr[],int size);
int count_ones(int number);
double square_root(int number);
int sum_digits(int number);
int check_prime(int number);
int factorial(int number);
int sum_numbers(int number);
void reverse_array(int *arr,int size);
void reverse_string(char *str,int size);
int reverse_number(int number);
int power(int number , int n);
int max_number_of_ones(char number);
int last_occurrence(int arr[],int size,int number);
unsigned int convert_decimal_to_unsigned(int arr[],int size);
int check_username(char* username,char*myname);
int check_power(int number);
int clear_bit(int number,int bit_num);
int main() {
    int number,bit_num;
    printf("Enter the number : \n");
    scanf("%d",&number);
    printf("Enter the number of the bit you want to clear : \n");
    scanf("%d",&bit_num);
    printf("the number after clear is %d ", clear_bit(number,bit_num));
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
int sum_digits(int number)
{
    int sum=0;
    while(number!=0)
    {
        sum+=(number%10);
        number/=10;
    }
    return sum;
}
int factorial(int number)
{
    if(number==1)
        return 1;
    else
        return number*factorial(number-1);
}
void reverse_string(char *str,int size)
{
    int k=0;
    char temp[100];
    for (int i = size-1; i >= 0 ; --i) {
        if(str[i]==' ')
        {
            for (int j = k-1; j >= 0 ; --j)
            {
                printf("%c",temp[j]);
            }
            printf(" ");
            k=0;
        }
        else
        {
            temp[k]=str[i];
            k++;
        }
    }
    if(k!=0)
    {
        for (int j = k-1; j >= 0 ; --j)
        {
            printf("%c",temp[j]);
        }
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
double square_root(int number)
{
    return sqrt(number);
}
int reverse_number(int number)
{
    static unsigned short new_num=0;
    int reminder;
    if(number!=0)
    {
        reminder=number%10;
        new_num=10*new_num+reminder;
        reverse_number(number/10);
    }
    else
        return 0;
    return new_num;
}
int count_ones(int number)
{
    int count=0;
    for (int i = 0; i < 32; ++i) {
        if(number&(1<<i))
        {
            count++;
        }
    }
    return count;
}
int unique(int arr[],int size)
{
    int uni=0;
    for (int i = 0; i < size; ++i)
        uni=uni^arr[i];
    return uni;
}
int sum_numbers(int number)
{
    static int sum=0;
    if(number!=0)
    {
        sum_numbers(number-1);
        sum+=number;
    }
    return sum;
}
void reverse_array(int *arr,int size)
{
    int arr2[size],c=0;
    for (int i = 0; i < size; ++i) {
        arr2[c]=arr[size-i-1];
        c++;
    }
    for (int i = 0; i < size; ++i) {
        arr[i]=arr2[i];
    }

}
int max_number_of_ones(char number)
{
    int count=0;
    while (number!=0)
    {
        number=number&(number<<1);
        count++;
    }
    return count;
}
unsigned int convert_decimal_to_unsigned(int arr[],int size)
{
    int number[size];
    unsigned int num=0;
    int temp;
    for (int i = 0; i < size; ++i) {
        temp=arr[i];
        switch (temp) {
            case '0x30':
                number[i]=0;
                break;
            case '0x31':
                number[i]=1;
                break;
            case '0x32':
                number[i]=2;
                break;
            case '0x33':
                number[i]=3;
                break;
            case '0x34':
                number[i]=4;
                break;
            case '0x35':
                number[i]=5;
                break;
            case '0x36':
                number[i]=6;
                break;
            case '0x37':
                number[i]=7;
                break;
            case '0x38':
                number[i]=8;
                break;
            case '0x39':
                number[i]=9;
                break;
            default:
                break;
        }
    }
    for (int i = 0; i < size; ++i) {
        num += number[i]*power(10,size-i-1);
    }
    return num;
}
int last_occurrence(int arr[],int size,int number)
{
    int index=0;
    for (int i = 0; i < size; ++i) {
        if(number == arr[i])
            index=i;
    }
    return index;
}
int check_username(char* username,char*myname)
{
    if(strcmp(username,myname)==0)
        return 1;
    else
        return 0;
}
int check_power(int number)
{
        double check= log(number)/ log(3);
        if(check==(int)check)
            return 0;
        else
            return 1;

}
int clear_bit(int number,int bit_num)
{
    return number &= ~(1<<bit_num);
}