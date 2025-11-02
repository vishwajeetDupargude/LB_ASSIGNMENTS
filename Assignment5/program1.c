
#include<stdio.h>  
#include<stdbool.h>              


void CheckEvenOdd(int iNum)
{
  

    if(iNum%2 == 0)
    {
        printf("Even number\n",iNum);
    }    
    else
    {
        printf("odd number\n",iNum);

    }


}

int main()
{
    int ivalue ;
    

    printf("Enter a number :");
    scanf("%d",&ivalue);

    CheckEvenOdd(ivalue);


    
    return 0;
}