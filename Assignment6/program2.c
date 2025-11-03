#include<stdio.h>
#include<stdbool.h>

bool CheckGreat(bool iNo)
{
    if(iNo > 100)
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
    printf("Enter a number :");
    scanf("%d",&iValue);
    bRet= CheckGreat(iValue);
    if(bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("smaller");
    }
    return 0;

}