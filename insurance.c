/*An Insurance company follows following rules to calculate premium

1)If a person's health is excellent and the person is btw 25 & 35 years of age and lives in a city and is a male then the premium is rs 4 per thousand and his policy amount cannot exceed rs 2 lakhs

2)If a person satisfies all the above conditions except that the sex is female then the premium is Rs 3 per thousand and her policy amount cannot exceed rs 1 lakh

3)If a person's health is poor and the person is btw 25-35 and lives in village and is a male then the premium is Rs 6 per thousand and his policy cannot exceed than rs 10,000

4)In all other cases the person is not insured */


#include <stdio.h>
int main(void)
{
    char sex,location,health, ans = 'y';
    int age;
    while ( ans == 'y')
    { 
        printf("\n Enter your Sex (m/f) : ");
        scanf(" %c",&sex);
        printf("\nEnter your location (v/c) : ");
        scanf(" %c",&location);
        printf("\nEnter your age : ");
        scanf(" %d",&age);
        printf("\nEnter your health (g/p): ");
        scanf(" %c",&health);
        if( sex == 'm' &&  location == 'c' && (age <= 35 && age >= 25) && health == 'g')
            printf("\nYou are given Premium of 4 Rs per 1000 Rs & Insurance upto 2 lac");
        else if(sex == 'f' && location == 'c' && (age <= 35 && age >= 25) && health == 'g')
            printf("\nFemale you are given premium of 3 Rs per 1000 Rs & Insurance upto 1 lacs");
        else if(sex == 'm' && (age >= 25 && age <= 35) && health == 'p' && location == 'v')
            printf("\nYou are given premium of 6 Rs per 1000 Rs & Insurance upto 10,000 Rs");
        else
            printf("\nYou aren't eligible for Insurance  ");
        
        printf("\nDo you want to verify insurance for another candidate (y/n) : ");
        scanf(" %c",&ans);
    }
    
    return 0;
    
}

