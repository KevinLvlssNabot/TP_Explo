#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>



int main(int argc, char const *argv[]) {

  char choixVille[15];
  char nomVille[15][15] = {"Belese","Alqueir"};



  printf("Dans quelle ville souhaitez-vous vous rendre ? Belese [1], Alqueir[2]\n");
  scanf("%s", choixVille);
      if (strcmp(nomVille[0], choixVille) == 0) {
        printf("Vous avez atteint la ville de %s.\n", nomVille[0]);
      } else if (strcmp(nomVille[1], choixVille) == 0) {
        printf("Vous avez atteint la ville d'%s.\n", nomVille[1]);
      }

  return 0;
}
