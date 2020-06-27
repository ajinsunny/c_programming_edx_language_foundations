
/*
Project             : Personal Study
*
* Program name      : Ifstatement_recepie.c
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
    int array[10];
    int input;
    int find = 0;
    int i;
    
    for(i=0; i< 10;i++){
        scanf("%d",&input);
        array[i] = input;
    }
    scanf("%d",&find);
    
    printf("%d",array[find]);
    
    return 0;
}

