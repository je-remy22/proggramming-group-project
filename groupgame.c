#include <stdio.h>
#include <stdlib.h>


int main(){

    int rounds,counter,lucky_number,secret_num,rem,score,total;
    float div_ans;
    counter = 1;
    rounds = 0;
    lucky_number = 0;
    rem = 0;
    score = 0;
    secret_num = 50;

    
    printf("How many rounds you want to play? \n");
    scanf("%d",&rounds);

    while(counter<=rounds){
        printf("Input your lucky number for round %d:  \n",counter);
        scanf("%d",&lucky_number);
        do{

        }while (secret_num == 0);
        div_ans = (float)lucky_number/(float)secret_num;
        rem = lucky_number%secret_num;
        if(rem == 0){
            score+=1;
        }
        else if(rem % 2==0){
            score+=3;
        } else{
            score-=3;
        }
        printf("--------------------------------------------------------------------------\n");
        counter++;
    }
    total = rounds*3;
    printf("Your score is: %d/%d",score,total);
    if (score>0){
        printf("\nYOU WON THE GAME!!");
    } else{
        printf("\nYOU LOST THE GAME!!");
    }

    return 0;
}