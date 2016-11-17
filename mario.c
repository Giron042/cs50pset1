#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    
    do
    {
        printf("Height :");
        n=GetInt();
    } while (n<0 || n>23);
    
    //pryamid
    for(int i = 1; i<= n; i++ )
    {
        //spaces
        for(int j = 0; j<= n -i; j++)
        {
            printf(" ");
        }
        //hashes
        for(int k = 0; k<= i; k++)
        {
             printf("#");
        }
        printf("\n");
    }
    return 0;
}
