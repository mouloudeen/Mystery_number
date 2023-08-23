//
//  fonction.c
//  nombre_mystere
//
//  Created by sidali zitouni terki on 23/04/2023.
//
 
#include "fonction.h"

void nbreMys(void){
    int partie = 1;
    const int VALEUR_MIN = 1, VALEUR_MAX = 100;
    while (partie != 2) {
        srand(time(NULL));
        
        int nbEssaies =0;
        
        int numberPlayer = 0;
        int number = rand()%(VALEUR_MAX+VALEUR_MIN)+VALEUR_MIN;
        
        printf("Devinez quel est mon nombre mystere. Indice: c'est un nombre entre 1 et 100 \n");
        
        while ((numberPlayer != number) && (nbEssaies < 10)){
            printf("tentative %d/10 : ", nbEssaies);
            scanf("%d", &numberPlayer);
            
            if (numberPlayer > number){
                printf("c'est moins\n");
                nbEssaies += 1;
            }
            if (numberPlayer < number){
                printf("c'est plus\n");
                nbEssaies += 1;
            }
            
            
        }
        if (nbEssaies == 10){
            printf("vous avez perdu, le nombre mystère est %d\n", number);
        }
        else {
            printf("vous bien trouve le chiffre %d en %d tentative(s)\n", number, nbEssaies);
        }
        printf("Voulez-vous faire une nouvelle partie (1-oui, 2-non)\n");
        scanf("%d",&partie);
        
    }
    printf("A bientot\n");
}
