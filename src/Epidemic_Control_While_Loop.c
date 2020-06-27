/*
Project             : Personal Study
*
* Program name      : Epidemic_Control_While_Loop.c
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
    
    int total_population;
    int day = 1;
    scanf("%d", &total_population);
    int total_infected = 1;
    
    while(total_infected < total_population){
        day++;
        total_infected = 3*total_infected;
        
    }
    printf("%d",day);
    return 0;
}