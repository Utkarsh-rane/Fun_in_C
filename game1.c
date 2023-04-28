#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number,guess, nguesses=1;
    
    srand(time(0));
    number= rand()% 100 +1;
    // printf("\n random number is %d",number);
    do{
        printf("\nguess the number betwwen 1 to 100=");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("\nlower number please!");
        }
        else if(guess<number)
        {
            printf("\nhigher number please!");
        }
        else
        {
            printf("\n you guessed in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);


    
    return 0;
}