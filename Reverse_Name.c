
/*
Project             : Personal Study
*
* Program name      : Repeat_Word.c
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
    
    int number_of_names;
    char first_name[101];
    char last_name[101];
    scanf("%d",&number_of_names);
    int i;
    
    for(i = 0; i<number_of_names; i++){
        scanf("%s %s\n",first_name,last_name);
        printf("%s %s\n",last_name,first_name);
    }
    
    return 0;
}