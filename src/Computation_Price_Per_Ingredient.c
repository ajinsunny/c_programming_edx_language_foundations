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
    
    
    int no_ingredients;
    scanf("%d",&no_ingredients);
    
    double price_per_pound[10];
    double weight_necessary[10];
    double total_price = 0;
    double ingredient_price[10];
    int i;
    
    for(i = 0; i<no_ingredients;i++)
    {
        scanf("%lf",&price_per_pound[i]);
        
    }
    
    for(i = 0; i<no_ingredients;i++)
    {
        scanf("\n%lf",&weight_necessary[i]);
        
    }
    for(i = 0; i<no_ingredients;i++)
    {
        ingredient_price[i] = price_per_pound[i] * weight_necessary[i];
        total_price += ingredient_price[i];
        
    }
    
    printf("%lf",total_price);
    
    return 0;
}


