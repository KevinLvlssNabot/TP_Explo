#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


typedef struct Villes_t villes; // structure villes

struct Villes_t{
  char nom[15];
  char description[100];
  int difficulte;
  int ID;
};


//typedef struct Map_t map;
//
//struct Map_t{
//  villes **villes_list;
//
//};



//char* deplacementVoyage(char nomVille[15], int choixVille, char description[100]){
//  printf("Dans quelle ville souhaitez-vous vous rendre ? %s [0], %s[1], %s[2], %s[3], %s[4].\n", nomVille[0], nomVille[1], nomVille[2], nomVille[3], nomVille[4]);
//  scanf("%s", choixVille);
//      if (strcmp(nomVille[0], choixVille) == 0) {
//        printf("Vous avez atteint la ville de %s.\n", nomVille[0]);
//        printf("%s\n", description);
//      } else if (strcmp(nomVille[1], choixVille) == 0) {
//        printf("Vous avez atteint la ville de %s.\n", nomVille[1]);
//      } else if (strcmp(nomVille[2], choixVille) == 0) {
//        printf("Vous avez atteint la ville de %s.\n", nomVille[2]);
//      } else if (strcmp(nomVille[3], choixVille) == 0) {
//        printf("Vous avez atteint la ville de %s.\n", nomVille[3]);
//      } else if (strcmp(nomVille[4], choixVille) == 0) {
//        printf("Vous avez atteint la ville de %s.\n", nomVille[4]);
//      }
//}




int main(int argc, char const *argv[]) {




  char choixVille[15];

  villes belese = {"Belese", "Une ville cotiere paisible.", 1, 1};
  villes alqueir = {"Alqueir", "Une ville ou vit le roi et ses chevaliers.", 4, 2};
  villes ya = {"Ya", "Un petit village ou semble reignee la paix.", 8, 3};              // déclaration des villes
  villes zoinrel = {"Zoinrel", "Une ville sombre, ravagee par la guerre.", 10, 4};
  villes sirasp = {"Sirasp", "La frontiere entre le monde connu et les enfers.", 16, 5};
  villes lieuActuel = {};

//  map carte = {NULL};
//  carte.villes_list = malloc(5* sizeof(villes*));
//  carte.villes_list[0] = &belese;
//  carte.villes_list[1] = &alqueir;
//  carte.villes_list[2] = &ya;
//  carte.villes_list[3] = &zoinrel;
//  carte.villes_list[4] = &sirasp;

  int choixID;
  int continuer = 1;
//  char lieuActuel[15];

//  deplacementVoyage(carte.villes_list->nom, choixVille[15], carte.villes_list->description);
 // demande initiale
  printf("Dans quelle ville souhaitez-vous vous rendre ? %s [1], %s[2], %s[3], %s[4,], %s[5]\n", belese.nom, alqueir.nom, zoinrel.nom, ya.nom, sirasp.nom);
  scanf("%s", choixVille);
      if (strcmp(belese.nom, choixVille) == 0) {
        printf("Vous avez atteint la ville de %s.\n", belese.nom);
        printf("%s\n", belese.description);
        strcpy(lieuActuel.nom, belese.nom);
        lieuActuel.ID = belese.ID;
      } else if (strcmp(alqueir.nom, choixVille) == 0) {
        printf("Vous avez atteint la ville d'%s.\n", alqueir.nom);
        printf("%s\n", alqueir.description);
        strcpy(lieuActuel.nom, alqueir.nom);
        lieuActuel.ID = alqueir.ID;
      } else if (strcmp(zoinrel.nom, choixVille) == 0) {
        printf("Vous avez atteint la ville de %s.\n", zoinrel.nom);
        printf("%s\n", zoinrel.description);
        strcpy(lieuActuel.nom, zoinrel.nom);
        lieuActuel.ID = zoinrel.ID;
      } else if (strcmp(ya.nom, choixVille) == 0) {
        printf("Vous avez atteint la ville de %s.\n", ya.nom);
        printf("%s\n", ya.description);
        strcpy(lieuActuel.nom, ya.nom);
        lieuActuel.ID = ya.ID;
      } else if (strcmp(sirasp.nom, choixVille) == 0) {
        printf("Vous avez atteint la ville de %s.\n", sirasp.nom);
        printf("%s\n", sirasp.description);
        strcpy(lieuActuel.nom, sirasp.nom);
        lieuActuel.ID = sirasp.ID;
      }



while (continuer == 1) {



          if (strcmp(lieuActuel.nom, belese.nom) == 0) { // aiguillage Belese
            printf("Dans quelle ville souhaitez-vous vous rendre ensuite ? Entrez l'ID de la ville choisie : ID %s: %d, ID %s: %d, ID %s: %d, ID %s: %d\n",alqueir.nom, alqueir.ID,zoinrel.nom, zoinrel.ID,ya.nom, ya.ID,sirasp.nom, sirasp.ID);
            printf("Vous ne pouvez pas choisir les ID qui ne precedent ou ne suivent directement l'ID de %s qui est %d.\n", lieuActuel.nom, lieuActuel.ID);
            scanf("%d", &choixID);
              while ((choixID != lieuActuel.ID +1) && (choixID != lieuActuel.ID -1)) {
                printf("Desole, vous ne pouvez pas acceder a cette ville.\n");
                printf("Dans quelle ville souhaitez-vous vous rendre ensuite ? Entrez l'ID de la ville choisie : ID %s: %d, ID %s: %d, ID %s: %d, ID %s: %d\n",alqueir.nom, alqueir.ID,zoinrel.nom, zoinrel.ID,ya.nom, ya.ID,sirasp.nom, sirasp.ID);
                scanf("%d", &choixID);
              }
                 if (choixID == alqueir.ID) {
                  printf("Vous avez atteint la ville d'%s.\n", alqueir.nom);
                  printf("%s\n", alqueir.description);
                  strcpy(lieuActuel.nom, alqueir.nom);
                  lieuActuel.ID = alqueir.ID;
                }
              } else if (strcmp(lieuActuel.nom, alqueir.nom) == 0) { // aiguillage Alqueir
                printf("Dans quelle ville souhaitez-vous vous rendre ensuite ? Entrez l'ID de la ville choisie : ID %s: %d, ID %s: %d, ID %s: %d, ID %s: %d\n",belese.nom, belese.ID,zoinrel.nom, zoinrel.ID,ya.nom, ya.ID,sirasp.nom, sirasp.ID);
                printf("Vous ne pouvez pas choisir les ID qui ne precedent ou ne suivent directement l'ID de %s qui est %d.\n", lieuActuel.nom, lieuActuel.ID);
                scanf("%d", &choixID);
                  while ((choixID != lieuActuel.ID +1) && (choixID != lieuActuel.ID -1)) {
                    printf("Desole, vous ne pouvez pas acceder a cette ville.\n");
                    printf("Dans quelle ville souhaitez-vous vous rendre ensuite ? Entrez l'ID de la ville choisie : ID %s: %d, ID %s: %d, ID %s: %d, ID %s: %d\n",belese.nom, belese.ID,zoinrel.nom, zoinrel.ID,ya.nom, ya.ID,sirasp.nom, sirasp.ID);
                    scanf("%d", &choixID);
                  }
                     if (choixID == belese.ID) {
                      printf("Vous avez atteint la ville d'%s.\n", belese.nom);
                      printf("%s\n", belese.description);
                      strcpy(lieuActuel.nom, belese.nom);
                      lieuActuel.ID = belese.ID;
                    } else if (choixID == ya.ID) {
                      printf("Vous avez atteint la ville de %s.\n", ya.nom);
                      printf("%s\n", ya.description);
                      strcpy(lieuActuel.nom, ya.nom);
                      lieuActuel.ID = ya.ID;
                    }
                }   else if (strcmp(lieuActuel.nom, ya.nom) == 0) { // aiguillage Ya
                      printf("Dans quelle ville souhaitez-vous vous rendre ensuite ? Entrez l'ID de la ville choisie : ID %s: %d, ID %s: %d, ID %s: %d, ID %s: %d\n",belese.nom, belese.ID,zoinrel.nom, zoinrel.ID,alqueir.nom, alqueir.ID,sirasp.nom, sirasp.ID);
                      printf("Vous ne pouvez pas choisir les ID qui ne precedent ou ne suivent directement l'ID de %s qui est %d.\n", lieuActuel.nom, lieuActuel.ID);
                      scanf("%d", &choixID);
                        while ((choixID != lieuActuel.ID +1) && (choixID != lieuActuel.ID -1)) {
                          printf("Desole, vous ne pouvez pas acceder a cette ville.\n");
                          printf("Dans quelle ville souhaitez-vous vous rendre ensuite ? Entrez l'ID de la ville choisie : ID %s: %d, ID %s: %d, ID %s: %d, ID %s: %d\n",belese.nom, belese.ID,zoinrel.nom, zoinrel.ID,alqueir.nom, alqueir.ID,sirasp.nom, sirasp.ID);
                          scanf("%d", &choixID);
                        }
                           if (choixID == alqueir.ID) {
                            printf("Vous avez atteint la ville d'%s.\n", alqueir.nom);
                            printf("%s\n", alqueir.description);
                            strcpy(lieuActuel.nom, alqueir.nom);
                            lieuActuel.ID = alqueir.ID;
                          } else if (choixID == zoinrel.ID) {
                            printf("Vous avez atteint la ville de %s.\n", zoinrel.nom);
                            printf("%s\n", zoinrel.description);
                            strcpy(lieuActuel.nom, zoinrel.nom);
                            lieuActuel.ID = zoinrel.ID;
                          }
                      }    else if (strcmp(lieuActuel.nom, zoinrel.nom) == 0) { // aiguillage Zoinrel
                            printf("Dans quelle ville souhaitez-vous vous rendre ensuite ? Entrez l'ID de la ville choisie : ID %s: %d, ID %s: %d, ID %s: %d, ID %s: %d\n",belese.nom, belese.ID,ya.nom, ya.ID,alqueir.nom, alqueir.ID,sirasp.nom, sirasp.ID);
                            printf("Vous ne pouvez pas choisir les ID qui ne precedent ou ne suivent directement l'ID de %s qui est %d.\n", lieuActuel.nom, lieuActuel.ID);
                            scanf("%d", &choixID);
                              while ((choixID != lieuActuel.ID +1) && (choixID != lieuActuel.ID -1)) {
                                printf("Desole, vous ne pouvez pas acceder a cette ville.\n");
                                printf("Dans quelle ville souhaitez-vous vous rendre ensuite ? Entrez l'ID de la ville choisie : ID %s: %d, ID %s: %d, ID %s: %d, ID %s: %d\n",belese.nom, belese.ID,ya.nom, ya.ID,alqueir.nom, alqueir.ID,sirasp.nom, sirasp.ID);
                                scanf("%d", &choixID);
                              }
                                 if (choixID == sirasp.ID) {
                                  printf("Vous avez atteint la ville d'%s.\n", sirasp.nom);
                                  printf("%s\n", sirasp.description);
                                  strcpy(lieuActuel.nom, sirasp.nom);
                                  lieuActuel.ID = sirasp.ID;
                                } else if (choixID == ya.ID) {
                                  printf("Vous avez atteint la ville de %s.\n", ya.nom);
                                  printf("%s\n", ya.description);
                                  strcpy(lieuActuel.nom, ya.nom);
                                  lieuActuel.ID = ya.ID;
                                }
                            } else if (strcmp(lieuActuel.nom, sirasp.nom) == 0) { // aiguillage Sirasp
                                  printf("Dans quelle ville souhaitez-vous vous rendre ensuite ? Entrez l'ID de la ville choisie : ID %s: %d, ID %s: %d, ID %s: %d, ID %s: %d\n",belese.nom, belese.ID,ya.nom, ya.ID,alqueir.nom, alqueir.ID,zoinrel.nom, zoinrel.ID);
                                  printf("Vous ne pouvez pas choisir les ID qui ne precedent ou ne suivent directement l'ID de %s qui est %d.\n", lieuActuel.nom, lieuActuel.ID);
                                  scanf("%d", &choixID);
                                    while ((choixID != lieuActuel.ID +1) && (choixID != lieuActuel.ID -1)) {
                                      printf("Desole, vous ne pouvez pas acceder a cette ville.\n");
                                      printf("Dans quelle ville souhaitez-vous vous rendre ensuite ? Entrez l'ID de la ville choisie : ID %s: %d, ID %s: %d, ID %s: %d, ID %s: %d\n",belese.nom, belese.ID,ya.nom, ya.ID,alqueir.nom, alqueir.ID,zoinrel.nom, zoinrel.ID);
                                      scanf("%d", &choixID);
                                    }
                                       if (choixID == zoinrel.ID) {
                                        printf("Vous avez atteint la ville d'%s.\n", zoinrel.nom);
                                        printf("%s\n", zoinrel.description);
                                        strcpy(lieuActuel.nom, zoinrel.nom);
                                        lieuActuel.ID = zoinrel.ID;
                                      }
                                }

}

  return 0;
}
