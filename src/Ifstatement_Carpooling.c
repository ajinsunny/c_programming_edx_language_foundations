/*
Project             : Personal Study
*
* Program name      : Ifstatement_Carpooling.c
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
    int no_passengers;
    double cost_gas_trip; 
    double result;
    scanf("%d %lf",&no_passengers,&cost_gas_trip);
    if(no_passengers==0){
        result = cost_gas_trip;
    }
    else
    {
        no_passengers += 1;
        result = (cost_gas_trip+1)/no_passengers;
    }
    printf("%.2lf",result);
    return 0;
     
}