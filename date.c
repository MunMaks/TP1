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
    
    while(1){   //siecles
        if (jours >= 36000){
            jours = jours - 36000;
            siecles++;
        }
        else break;
    }

    while(1){   //annees
        if (jours >= 360){
            jours -= 360;
            ++annees; 
        }
        else break;
    }
    
    while(1){   //mois
        if (jours >= 30){
            jours -= 30;
            ++mois; 
        }
        else break;
    }
        
    while(1){   //semaines
        if (jours > 6){
            jours -= 7;
            ++semaines;
        }
        else break;
        
    }
    //jours restant
    if (jours < 7) jours_left = jours;
    
    printf("%d siecle", siecles);
    if (siecles > 1) printf("s");       // a partir de jours >= 72000

    printf(" %d annee", annees); 
    if (annees > 1) printf("s");        // a partir de jours >= 720

    printf(" %d mois ", mois);

    printf("%d semaine", semaines);     // a partir de jours >= 14
    if (semaines > 1) printf("s");

    printf(" %d jour", jours_left);
    if (jours_left > 1) printf("s");    // a partir de jours >= 2
    printf("\n");
    
    return 0;
}
