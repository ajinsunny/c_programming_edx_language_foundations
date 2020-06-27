/*
Project             : Personal Study
*
* Program name      : Ifstatement_Costly_Hotel_Rooms.c
*
* Author            : Ajin
*
* Date created      : 20200112
*
* Purpose           : Learn
*
* Revision History  : 20200108
*
* Date        Author      Ref    Revision (Date in YYYYMMDD format) 
* 20200112    Ajin          1      First commit on 20200112

*/



#include<stdio.h>
int main(void){
    
    int age;
    int weight_luggage;
    int cost;
    scanf("%d\n",&age);
    scanf("%d",&weight_luggage);
    
    if(age == 60){
        cost = 0;
    }
    
    else if(age<10){
        cost = 5;
    }
    else{
        if(weight_luggage>20)
        {
            cost = 30 + 10;
        }
        else{
            cost = 30;
        }
    }
    
    printf("%d",cost);
    return 0;
    
}