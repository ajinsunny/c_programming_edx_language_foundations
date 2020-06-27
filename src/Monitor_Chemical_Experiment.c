/*
Project             : Personal Study
*
* Program name      : Monitor_Chemical_Experiment.c
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
int main(void)
{
    int min;
    int max;
    int temp;
    scanf("%d",&min);
    scanf("%d\n",&max);
    scanf("%d",&temp);
    while (temp != -999){
        if(temp>=min && temp <=max){
            printf("Nothing to report.\n");
        }
        if((temp<min || temp >max) && temp!=-999){
            printf("Alert.");
            break;
        }
        scanf("%d",&temp);
        
    }
    return 0;
}