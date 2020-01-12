/*
Project             : Personal Study
*
* Program name      : Branch_Loop_Inside.c
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
    int no_cities;
    int population;
    int i;
    int count_cities = 0;
    scanf("%d",&no_cities);
    for( i=0; i<no_cities; i++){
        
        scanf("%d\n",&population);
        if(population>10000){
            count_cities+=1;
        }
        
    }
    printf("%d", count_cities);
    
    return 0;
}