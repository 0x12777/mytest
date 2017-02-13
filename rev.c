/*A five digit number is entered through keyboard.Write a program to obtain the reverse number
 and to determine if original number and reverse number are equal or not */


#include <stdio.h>
int main(void)
{
    int i,temp,sum = 0,k;
    printf("\nEnter a 5 digit +ve number : ");
    scanf("%d",&i);
    k  = i;
    
    while (i != 0)
    {
        temp = i % 10;
        printf("%d",temp);
        i = i / 10;
        sum = sum * 10 + temp ;
    }
    
    printf("\nValue of sum is %d %d ",sum,i);
    
    if(sum == k)
        printf("\nOriginal number & Reversed number are equal");
    else 
        printf("\nOriginal & reversed number both are different");
    
    return 0;
}

