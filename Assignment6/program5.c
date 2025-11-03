#include<stdio.h>
float Percentage(int iNo1, int iNo2)
{
   if(iNo2==0)
   {
        return 0.0f;
   }
   return (float)iNo1/iNo2;
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0;  
   
    printf("Enter  two number :");
    scanf("%d %d",&iValue1,&iValue2);
    fRet = Percentage(iValue1, iValue2);
    printf("Divisible of numbers =%.2f\n",fRet);
 
    return 0;

}