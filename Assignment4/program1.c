#include<stdio.h>

int MultiFact(int iNo)
{
    int i =  0;
    int iMultti =1;
    if (iNo <= 0)
    {
        iNo= -iNo;
    }
    for(i = 1; i<=(iNo/2);i++)
    {
        if (iNo % i == 0)
        {
            iMultti =iMultti * i;
        }

    }
    return iMultti;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter  number ");
    scanf("%d",&iValue);
    iRet =MultiFact(iValue);
    printf("%d",iRet);
    return 0;

}