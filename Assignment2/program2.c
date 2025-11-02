// 
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
      if(iNo<0)
    {
        iNo = -iNo;
    }
    while (iNo>iCnt)
    {
        printf("*");

        iNo--;

    }
    
}
int main()
{
    int ivalue = 0;
    printf("Enter a number :");
    scanf("%d",&ivalue);

    Display(ivalue);
    return 0;
}