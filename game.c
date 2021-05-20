// first game of  genrating and guessing an random number
#include<stdio.h>
#include<stdlib.h>     // this libarery is used to use the rand()
#include<time.h>      // this is used for time
int main()
{
    int number,guess,ngusses=1;
    srand(time(0));
    number = rand()%100+1;  /*it is used to generate random number is used to gen number and %100+1 is used to genrate the number b/w 1 to 100*/
     // printf("%d \n",number);
    do{
        printf("Guess the number\n");
        scanf("%d\n",&guess);
        if(guess>number)
        {
            printf("your number is higher then the number enter lower\n\n");
        }
        else if(guess<number)
        {
         printf("your number is lower then the number enter higher\n\n");
        }
        else
        {
         printf("you gussed it in %d attempts \n\n",ngusses);
        }
        ngusses++;
    
    } while (guess!=ngusses);
    return 0;
}