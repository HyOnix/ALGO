#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>




int main (void)
{
        int menu_option;
        printf("-                                        -\n");
        printf("      PROJET ALGO : BATAILLE NAVALE !!! \n");
        printf("-Crée par :                              -\n");
        printf("------------------------------------------\n");


        do {
                printf("\n" );
                printf("__________________________________________\n");
                printf("-                 MENU                   -\n");
                printf("1. \n");
                printf("2. \n");
                printf("3. \n");
                printf("4. \n");
                printf("5. Quitter.\n");
                printf("Choisissez une option:\n");
                printf("------------------------------------------\n");
                menu_option = getchar();
                getchar();
                printf("\n" );
                switch(menu_option) {

                case '1':
                        break;
                case '2':
                        break;
                case '3':
                        break;
                case '4':
                        break;
                case '5':
                        break;
                default:
                        printf("Mauvaise entrer !!!\n");
                        break;

                }
        } while(menu_option !='5');
}
