#include<stdio.h>

void FactReV(int iNo)
{
    int iCnt =  0;
    for(iCnt = iNo/2;iCnt>=0;iCnt--)
    {
        if ((iNo%iCnt == 0))
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
    FactReV(iValue);
  
    return 0;

}