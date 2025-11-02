#include<stdio.h>
#include<stdbool.h>

bool CHkEven(int iNo)
{
    int iRem = 0;
    iRem = iNo%2;
    if(iRem == 0)
    {
        return true;
    }
    else
    {
        return false;
    }


}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Entr number :");
    scanf("%d",&iValue);

    bRet = CHkEven(iValue);

    printf("Result is %d\n",bRet);
    if(bRet == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {
        printf("%d is Odd number\n",iValue);
    }
    return 0;
    


    

}