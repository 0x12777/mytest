/*Find all the prime factors of any given number */

#include <stdio.h>
int main(void)
{
    int i,j,k;
    printf("\nEnter number whose factor you want to find out : ");
    scanf("%d",&i);
    
    j = i ;
    for (j = 2 ; j <= i-1;  )
    {
        while( i % j == 0)
        {
            
            {
                printf(" %d",j);
                i = i / j ;
            }
        }    
            
        j++;
        
    }
    
    return 0;
    
}
