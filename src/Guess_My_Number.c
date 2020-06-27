/*
Project             : Personal Study
*
* Program name      : Guess_My_Number.c
*
* Author            : Ajin
*
* Date created      : 20200112
*
* Purpose           : Learn
*
* Revision History  : 20200112
*
* Date        Author      Ref    Revision (Date in YYYYMMDD format) 
* 20200112    Ajin          1      First commit on 20200112

*/



#include<stdio.h>
int main (void){
    int number;
    scanf("%d",&number);
    int guess;
    int tries = 0;
    
    while(guess!=number){
        scanf("%d",&guess);
        if(guess<number)
        {
            printf("it is more \n");
            
        }
        if(guess>number){
            printf("it is less \n");
            
        }
        tries++;
        
    }
    
    printf("Number of tries needed: \n%d\n",tries);
        
    return 0;
}