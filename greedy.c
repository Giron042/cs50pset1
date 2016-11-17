#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
  
    float cash;
    int count = 0;;
   do{ 
    printf("How much change is owed?: \n");
    cash = GetFloat();
   
   }
   while (cash <= 0);
    int leftover=0;
    leftover = ((int)round(cash * 100));
    
    count = count + leftover /  25;
    leftover= leftover  % 25;
    
    count = count + leftover /  10;
    leftover= leftover % 10;
   
    count = count + leftover / 5;
    leftover = leftover  % 5;
  
    count = count + leftover;
    printf("%i\n", count);
    
    return 0;
}