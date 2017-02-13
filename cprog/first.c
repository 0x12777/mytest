#include <stdio.h>
int main(void)
{	
    int i;
    printf("\nEnter a number : ");
    scanf("%d",&i);
    (i > 5) ? printf("You printed %d which is greater than 5",i) : printf("You printed %d which is less than 5",i);
    return 0;
	
}
