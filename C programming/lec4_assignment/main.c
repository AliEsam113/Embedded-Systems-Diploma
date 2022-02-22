#include <stdio.h>
#include <string.h>
int main() {
    /*
    float arr1[2][2], arr2[2][2],sum[2][2];

    //example 1
    //entering data
    printf("Enter the elements of the 1st matrix \n");
    for (int i = 1; i <= 2; ++i) {
        for (int j = 1; j <= 2; ++j) {
            printf("Enter a%d%d : ", i, j);
            scanf("%f", &arr1[i - 1][j - 1]);
        }
    }
    printf("Enter the elements of the 2nd matrix \n");
    for (int i = 1; i <= 2; ++i) {
        for (int j = 1; j <= 2; ++j) {
            printf("Enter a%d%d : ", i, j);
            scanf("%f", &arr2[i - 1][j - 1]);
        }
    }
    //calculating sum
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    fflush(stdin);
    fflush(stdout);
    printf("sum of matrix : \n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%f   ", arr1[i][j]);
        }
        printf("\n");

    }
    */
/*
    //example 2
    int size;
    printf("Enter the numbers of data \n");
    scanf("%d",&size);
    float arr[size],sum=0,avg;
    for (int i = 0; i < size; ++i) {
        printf("Enter number : ");
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/size;
    printf("Average = %f",avg);
*/
//example 3
/*
    int rows,columns;
    printf("Enter rows and columns of matrix \n");
    scanf("%d",&rows);
    scanf("%d",&columns);
    int arr[rows][columns],transpose[rows][columns];
    printf("Enter elements of matrix : \n");
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= columns; ++j) {
            printf("Enter elements a%d%d",i,j);
            scanf("%d",&arr[i-1][j-1]);
        }
    }
    printf("Entered matrix : \n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            transpose[i][j]=arr[j][i];
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix : \n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("%d  ",transpose[i][j]);
        }
        printf("\n");
    }
    */
//example 4
/*
int arr[10];
    int size,element,pos;
    printf("Enter the no of elements : \n");
    scanf("%d",&size);
    for (int i = 0; i < size; ++i) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be inserted \n");
    scanf("%d",&element);
    printf("Enter the location \n");
    scanf("%d",&pos);
    if(pos==0)
    {
        for (int i = size; i>=0; --i) {
            arr[i+1]=arr[i];
        }
        arr[0]=element;
    }
    else if (pos==size)
        arr[size]=element;
    else
    {
        for (int i = size; i >0; --i) {
            arr[i+1]=arr[i];
            if(i==pos-1)
            {
                arr[i+1]=arr[i];
                arr[i]=element;
            }
        }
    }
    for (int i = 0; i < size+1; ++i) {
        printf("%d  ",arr[i]);
    }
*/
//example 5
/*
    int size,element;
    printf("Enter the numbers of elements \n");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; ++i) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched \n");
    scanf("%d",&element);
    for (int i = 0; i < size; ++i) {
        if(arr[i]==element)
            printf("Number found at the location = %d",i);
    }

    */
//example 1 on strings
/*
    char sen[100],ch;
    int frequency=0;
    printf("Enter a string :");
    gets(sen);
    printf("Enter a character to find frequency :");
    scanf("%c",&ch);
    for (int i = 0; sen[i]!='\0'; ++i) {
        if(sen[i]==ch)
            frequency++;
    }
    printf("frequency of %c = %d",ch,frequency);
*/
//example 2
/*
    char sen[100];
    int length=0;
    printf("Enter a string :");
    gets(sen);
    for (int i = 0; sen[i]!='\0'; ++i) {
        length++;
    }
    printf("Length of string = %d",length);
    */
//example 3
    char sen[100];
    printf("Enter a string :");
    gets(sen);
    char reversed[strlen(sen)];
    for (int i = 0; i <strlen(sen) ; ++i) {
        reversed[i]=sen[strlen(sen)-i-1];
    }
    printf("Reverse string is : %s",reversed);
        return 0;

}