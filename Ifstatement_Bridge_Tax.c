/*
Project             : Personal Study
*
* Program name      : Ifstatement_Bridge_Tax.c
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
    int die_1;
    int die_2;
    int special_fee = 36;
    scanf("%d\n",&die_1);
    scanf("%d",&die_2);
    int sum = 0;
    sum = die_1 + die_2;
    if(sum >= 10){
        printf("Special tax\n");
        printf("%d",special_fee);
    }
    else{
        printf("Regular tax\n");
        printf("%d",sum*2);
    }
    
    return 0;
    
}
