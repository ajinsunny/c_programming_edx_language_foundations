


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


#include <stdio.h>
int main(void){
    int times;
    char word[10];
    int count = 1;
    scanf("%d %s",&times,word);
    
    while (count <= times){
        printf("%s\n",word);
        count++;
    }
    
    return 0;
}