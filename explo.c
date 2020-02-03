#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


typedef struct Villes_t villes;

struct Villes_t{
  char nom[15];
  char description[100];
  int difficulte;
  int lieuxAccessibles[20];
};


typedef struct Map_t map;

struct Map_t{
  villes **villes_list;

};



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
  villes ya = {"Ya", "Un petit village ou semble reignee la paix.", 8, 3};
  villes zoinrel = {"Zoinrel", "Une ville sombre, ravagee par la guerre.", 10, 5};
  villes sirasp = {"Sirasp", "La frontiere entre le monde connu et les enfers.", 16, 7};

  map carte = {NULL};
  carte.villes_list = malloc(5* sizeof(villes*));
  carte.villes_list[0] = &belese;
  carte.villes_list[1] = &alqueir;
  carte.villes_list[2] = &ya;
  carte.villes_list[3] = &zoinrel;
  carte.villes_list[4] = &sirasp;

//  deplacementVoyage(carte.villes_list->nom, choixVille[15], carte.villes_list->description);

  printf("Dans quelle ville souhaitez-vous vous rendre ? %s [1], %s[2], %s[3], %s[4,], %s[5]\n", belese.nom, alqueir.nom, zoinrel.nom, ya.nom, sirasp.nom);
  scanf("%s", choixVille);
      if (strcmp(belese.nom, choixVille) == 0) {
        printf("Vous avez atteint la ville de %s.\n", belese.nom);
        printf("%s\n", belese.description);
      } else if (strcmp(alqueir.nom, choixVille) == 0) {
        printf("Vous avez atteint la ville d'%s.\n", alqueir.nom);
        printf("%s\n", alqueir.description);
      } else if (strcmp(zoinrel.nom, choixVille) == 0) {
        printf("Vous avez atteint la ville de %s.\n", zoinrel.nom);
        printf("%s\n", zoinrel.description);
      } else if (strcmp(ya.nom, choixVille) == 0) {
        printf("Vous avez atteint la ville de %s.\n", ya.nom);
        printf("%s\n", ya.description);
      } else if (strcmp(sirasp.nom, choixVille) == 0) {
        printf("Vous avez atteint la ville de %s.\n", sirasp.nom);
        printf("%s\n", sirasp.description);
      }

  return 0;
}
