
/*
Project             : Personal Study
*
* Program name      : Odd_Even_Letters.c
*
* Author            : Ajin
*
* Date created      : 20200113
*
* Purpose           : Learn
*
* Revision History  : 20200108
*
* Date        Author      Ref    Revision (Date in YYYYMMDD format) 
* 20200113    Ajin          1      First commit on 20200113

*/

#include<stdio.h>

int main(void){
    
    char name[51];
    int i = 0;
    scanf("%s",name);
    int count = 1;
    
    while(name[i]!='\0'){
        count+=1;
        i+=1;
    }
    
    if(count%2){
        printf("%d",1);
    }
    else{
        printf("%d",2);
    }
    
    return 0;
}