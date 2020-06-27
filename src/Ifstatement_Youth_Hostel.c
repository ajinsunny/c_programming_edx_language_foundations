/*
Project             : Personal Study
*
* Program name      : IfStatement_Youth_Hostel.c
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
int main(void){
    
    int time_;
    int base_price = 10;
    int additional_price = 5;
    int total_price = 0;

    scanf("%d",&time_);
    if (time_ <8){
        total_price = base_price + time_*additional_price;
    }
    else{
        total_price = 53;
    }
    printf("%d",total_price);
    return 0;
    
}