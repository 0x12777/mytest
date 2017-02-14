/*Write a program for a matchstick game btw the computer and the user.Your pgr should ensure
 that the computer always wins .Rules for games are as follows :
 
 * 1)There are 21 match sticks
 * 2)The computer asks the player to pick 1,2,3,4 match sticks .4 is max
 * 3)After the person picks the computer does its picking
 * 4)Whoever is forced to pick up the last match stick loses the game
 */


#include <stdio.h>
int main(void)
{
    int i,ms = 21 ,sum = 0;
    while (ms > 1 )
    {
        printf("\nCurrently there are %d match-sticks",ms);
        printf("\nEnter how many match-sticks you will have(1-4): ");
        scanf("%d",&i);
        
        printf("\nFine now I'll choose : ");
        printf("I choose %d match sticks",5 - i);
        ms = ms - 5;
       
                
    }
    if( ms == 1)
        
    {
        printf("\nIt's your turn to choose matchstick user ,You can only choose 1 matchstick now :" );
        scanf("%d",&i);
        printf("\nAs you are last one to choose so I win");
    }
    
    return 0;
    
    
}
