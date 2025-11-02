#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt =  0;
    int iSum= 0;
    int iNonsum = 0;
    for(iCnt = 1;iCnt<iNo;iCnt++)
    {
        if ((iNo%iCnt )!=0)
        {
            iSum = iSum+iCnt;
        }
        else
        {
            iNonsum=iNonsum+iCnt;   

        }
    }
    return iSum-iNonsum;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
   

    printf("Enter  number ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);
    return 0;

}