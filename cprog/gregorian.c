/*According to the Gregorian calender, it was Monday on the date 01/01/01. If any year is input 
  through the keyboard write a program to find out what is the day on 1st January of this year?*/



#include <stdio.h>
int main(void)
{
    int yr,lpyrdays,normaldays,res;
    printf("\nEnter a year whose day of 1st Jan you want to know : ");
    scanf("%d",&yr);
    
    yr = (yr - 1) ; //removing 1 year as only 1 day we are calculating of current yr
    lpyrdays =  (yr/4)  + (yr / 400) - (yr / 100 ); //Calculating leap days in that particular year
    normaldays = (yr* 365 )+ 1 + lpyrdays ; //Calculating normal days in that year & adding 1st jan's 1 day into it
    res = normaldays % 7;
    
    
    if(res==0)
    printf("\nSunday");
    if(res==1)
    printf("Monday");
    if(res==2)
    printf("Tuesday");
    if(res==3)
    printf("Wednesday");
    if(res==4)
    printf("Thursday");
    if(res==5)
    printf("Friday");
    if(res==6)
    printf("Saturday");
     
    return 0; 
    
    
    
    
}
