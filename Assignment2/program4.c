#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int iNt = 0;
       if(iFrequency<0)
    {
        iFrequency = -iFrequency;
    }
    for(iNt= 0; iNt< iFrequency; iNt++)
    {
        printf("%d\n",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter a first Number :");
    scanf("%d",&iValue);

    printf("Enter a second Number :");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;


}