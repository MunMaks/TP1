#include <stdio.h>

int main(){
    int jours;

    int jours_left = 0, semaines = 0, mois = 0, annees = 0, siecles = 0;
    /*
    siecle = 36000;
    annee = 360;
    mois = 30;
    semaine = 7;*/

    printf("Combien de jours? \n");
    scanf("%d", &jours);

    while(1){
        if (jours > 0) break;
        printf("Combien de jours? \n");
        scanf("%d", &jours);
    }

    while(1){
        if (jours >= 36000){
            jours -= 36000;
            ++siecles;
        }
        else if (jours >= 360){
            jours -= 360;
            ++annees;
        }
        else if (jours >= 30){
            jours -= 30;
            ++mois;
        }
        else if (jours >= 7){
            jours -= 7;
            ++semaines;
        }
        else 
            jours_left = jours;
            jours = 0;
        if (jours == 0){
            break;
        }
            
    }


    printf("%d siecle", siecles);
    if (siecles > 1) printf("s");

    printf(" %d annee", annees); 
    if (annees > 1) printf("s");

    printf(" %d mois ", mois);

    printf("%d annee", semaines); 
    if (semaines > 1) printf("s");

    printf(" %d jour", jours_left);
    if (jours_left > 1) printf("s");

    printf("\n");

    return 0;
}

