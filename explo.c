#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>



int main(int argc, char const *argv[]) {
  
  int choixVille;
  printf("Dans quelle ville souhaitez-vous vous rendre ? Belese [1], Alqueir[2]\n");
  scanf("%d", &choixVille);
      if (choixVille == 1) {
        printf("Vous avez atteint la ville de Belese.\n");
      } else if (choixVille == 2) {
        printf("Vous avez atteint la ville d'Alqueir.\n");
      }

  return 0;
}
