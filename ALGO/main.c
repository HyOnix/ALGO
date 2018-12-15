#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "obj.h"
#define t_tab 11


int main (void)
{
        system("clear");
        printf("\n");
        int tab[t_tab][t_tab]={{}};
        int menu_option='0';
        char choice= '1';
        char i,j,mark;
        FillTab(tab,choice);
        printf("-                                        -\n");
        printf("      PROJET ALGO : BATAILLE NAVALE !!! \n");
        printf("-Crée par :      MOI  2                  -\n");
        printf("------------------------------------------\n");
        printf("\n\n");
        putIntTab(tab);
        printf("\n\n" );
        printf("____________________________________________\n");
        printf("CHOIX DU CARACTERE DE LA GRILLE\n");
        printf("____________________________________________\n");
        printf("\n" );
        printf("CARACTERE :\t" );
        menu_option=getchar();
        getchar();
        choice=menu_option;
        FillTab(tab,choice);
        menu_option ='m';
        printf("\n\n" );
        printf("____________________________________________\n");
        printf("CHOIX DU CARACTERE DE LE L'OBJET\n");
        printf("____________________________________________\n");
        printf("\n" );
        printf("CARACTERE :\t" );
        mark=getchar();
        getchar();


        do {
                system("clear");
                printf("\n");
                putIntTab(tab);
                printf("\n\n" );
                printf("__________________________________________\n");
                printf("-                 MENU                   -\n");
                printf("__________________________________________\n");
                printf("\n" );
                printf("0.CHOIX DU CARACTERE DE LA GRILLE\n");
                printf("1.      \n");
                printf("2.AFFICHER TAB +1 \n");
                printf("3.AUTO DEFFILEMENT  \n");

                printf("5. Quitter.\n");
                printf("Choisissez une option:\n");
                printf("------------------------------------------\n");
                menu_option = getchar();
                getchar();
                printf("\n" );
                system("clear");
                switch(menu_option) {
                case '4':
                        system("clear");
                        printf("\n" );
                        putIntTab(tab);
                        printf("\n" );
                        printf("\n" );
                        printf("____________________________________________\n");
                        printf("POSITION OBJET puis retour au menu\n");
                        printf("____________________________________________\n");
                        printf("\n" );
                        printf("POSITION LETTRE|NOMBRE:\t" );
                        i=getchar();
                        j=getchar();
                        getchar();
                        AddObject(tab,  i, j,mark);
                        menu_option='m';
                        printf("\n" );
                        break;
                case '1':

                        break;
                case '0':
                        system("clear");
                        printf("\n" );
                        printf("____________________________________________\n");
                        printf("CHOIX DU CARACTERE DE LA GRILLE\n        puis retour au menu\n");
                        printf("____________________________________________\n");
                        printf("\n" );
                        printf("CARACTERE :\t" );
                        menu_option=getchar();
                        getchar();
                        choice=menu_option;
                        FillTab(tab,choice);
                        menu_option='m';
                        break;

                case '2':
                        choice++;
                        system("clear");
                        FillTab(tab,choice);
                        break;
                case '3':

                        do {
                                printf("\n" );
                                putIntTab(tab);
                                printf("\n" );
                                printf("\n" );
                                printf("____________________________________________\n");
                                printf("Exemple d'utilisation (...m)= 3 changement \n        puis retour au menu\n");
                                printf("____________________________________________\n");
                                printf("        m. Revenir au menu.\n");
                                printf("        q. Quitter le prog.\n");
                                printf("Choisissez une option:\n");
                                printf("--------------------------------------------\n");
                                printf("\n" );
                                menu_option = getchar();
                                if(menu_option!='m' && menu_option!='q') {
                                        choice++;
                                        FillTab(tab,choice);
                                        sleep(1);
                                        system("clear");
                                }

                        } while(menu_option!='m' && menu_option!='q');
                        if (menu_option=='q') {
                                menu_option='5';
                        }
                        printf("\n" );
                        system("clear");
                        printf("\n" );
                        putIntTab(tab);
                        printf("\n" );
                        sleep(1);
                        getchar();
                        break;

                default:
                        printf("Mauvaise entrer !!!\n");
                        sleep(1);
                        system("clear");
                        break;

                }
        }
        while(menu_option !='5');
}
