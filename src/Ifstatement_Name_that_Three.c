/*
Project             : Personal Study
*
* Program name      : Ifstatement_Name_that_Three.c
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
    int height;
    int leaflets;
    
    scanf("%d\n",&height);
    scanf("%d",&leaflets);
    
    if (height<=5 && leaflets >=8){
        printf("Tinuviel");
    }
    else if(height>=10 && leaflets >=10){
        printf("Calaelen");
    }
    else if(height<=8 && leaflets <=5){
        printf("Falarion");
        
    }
    else if(height>=12 && leaflets <= 7){
        printf("Dorthonion");
    }
    else
    {
        printf("Uncertain");
    }
    
    
    
    return 0;
}