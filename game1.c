#include <stdio.h>

int main(){
    int rounds,lucky_numbers,secret_number,score;
    
    printf("enter number of rounds: ");
    scanf("%d",&rounds);
    secret_number = 5 ;
    score = 0;
    
    for(rounds;rounds>0;rounds--){
        printf("enter lucky number: ");
        scanf("%d",&lucky_numbers);
        if(lucky_numbers % secret_number == 0){
            score++ ;
        }else if((lucky_numbers % secret_number) % 2 == 0){
            score+=3 ;
        }else {
            score-=3 ;
        } 
        }
    
    if(score>0){
        printf("You have won the game");
        
    }else{
        printf("You have lost the game");
    }
    
    return 0;
}




