#include<stdio.h>

void NonFactor(int iNo)
{
    int iCnt =  0;
    for(iCnt = 1;iCnt<=iNo/2;iCnt++)
    {
        if ((iNo%iCnt )!=0)
        {
            printf("%d\n",iCnt);
        }
    }
    printf("\n");
}


int main()
{
    int iValue = 0;
   

    printf("Enter  number ");
    scanf("%d",&iValue);
    NonFactor(iValue);
  
    return 0;

}