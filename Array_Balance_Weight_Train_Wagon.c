/*
Project             : Personal Study
*
* Program name      : Array_Balance_Weight_Train_Wagon.c
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
    int no_cars;
    double car_weight[5];
    int i;
    int sum = 0;
    scanf("%d\n",&no_cars);
    for(i = 0; i <no_cars; i++){
        scanf("%lf\n",&car_weight[i]);
        sum += car_weight[i];
    }
    double reference_weight;
    reference_weight = sum/no_cars;
    double weight_adjustment[5];
    
    for (i = 0; i<no_cars; i++){
        weight_adjustment[i] = reference_weight - car_weight[i];
        printf("%.1lf\n",weight_adjustment[i]);
    }
    
    return 0;
}