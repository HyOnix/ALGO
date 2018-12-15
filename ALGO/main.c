#include "obj.c"
#include <unistd.h>


int main (void)
{
        int tab[t_tab][t_tab]={{}};
        int menu_option;
        printf("-                                        -\n");
        printf("      PROJET ALGO : BATAILLE NAVALE !!! \n");
        printf("-Crée par :      MOI                     -\n");
        printf("------------------------------------------\n");


        do {
                printf("\n" );
                printf("__________________________________________\n");
                printf("-                 MENU                   -\n");
                printf("1.AFFICHER TAB \n");
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
                        system("clear");
                        for (int choice=0; choice < 10; choice++) {

                                FillTab(tab,choice);
                                putIntTab(tab);
                                sleep(1);
                                printf("\n" );
                                if (choice!=9) {
                                        system("clear");
                                }

                        }

                        break;
                case '2':
                        system("clear");
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
