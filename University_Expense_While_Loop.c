/*
Project             : Personal Study
*
* Program name      : University_Expense_While_Loop.c
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
int main(void) {
    int expense = 0;
    int sum = 0;
    scanf("%d", &expense);
   
    while(expense!=-1){
        sum += expense;
        scanf("%d\n", &expense);
        
    }
    printf("%d",sum);
    return 0;
}