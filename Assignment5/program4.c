#include<stdio.h>
void checkNumType(int num)
{
    if(num>0)
    {
        printf("%d is potive",num);
    }
    else if(num<0)
    {
        printf("%d is negative",num);
    }
    else 
    {
        printf("Number is zero\n");
    }

}
int main()
{
    int number;
    printf("Enter a number :");
    scanf("%d",number);
    checkNumType(number);
    return 0;
}




