/*
Project             : Personal Study
*
* Program name      : Computation_Price_Per_Ingredient.c
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
    int nbStars;
    
    scanf("%d",&nbStars);
    int i;
    int j;

    for(i = 0; i<nbStars; i++ ){
        for(j = 0; j<nbStars; j++){
            printf("%c",'*');
        }
        printf("\n");
    }
    
    return 0;
}