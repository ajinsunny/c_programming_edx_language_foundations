/*
Project             : Personal Study
*
* Program name      : Ifstatement_Tug_of_War.c
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
    
    int members_per_team;
    int team1_player;
    int team2_player;
    int sum_of_team1_players_weight = 0;
    int sum_of_team2_players_weight = 0;
    scanf("%d\n",&members_per_team);
    int i;
    for(i = 0; i<members_per_team; i++)
    {
        
        scanf("%d\n",&team1_player);
        scanf("%d",&team2_player);
        sum_of_team1_players_weight +=team1_player;
        sum_of_team2_players_weight +=team2_player;
        
    }
    
    if (sum_of_team1_players_weight > sum_of_team2_players_weight)
    {
        printf("Team 1 has an advantage\n");
        
    }
    
    else{
        printf("Team 2 has an advantage\n");
    }
    
    
    printf("Total weight for team 1: ");
    printf("%d",sum_of_team1_players_weight);
    printf("\nTotal weight for team 2: ");
    printf("%d",sum_of_team2_players_weight);
    
    return 0;
}