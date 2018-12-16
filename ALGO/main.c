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
        char tab[t_tab][t_tab]={{}};
        int menu_option='0',lng;
        char choice= '.',test;
        char mark='x',boat='0',disp;
        char i='N',j='A';
        FillTab(tab,choice);
        AddObject(tab,'e','5','o',boat);
        AddBoat(tab,'b','2',boat,3,'l');
        AddBoat(tab,'h','3',boat,2,'h');
        AddBoat(tab,'e','4',boat,4,'l');
        AddObject(tab,'b','3','o',boat);
        printf("-                                        -\n");
        printf("      PROJET ALGO : BATAILLE NAVALE !!! \n");
        printf("-Crée par : Quentin HENRY\n");
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
        printf("CHOIX DU CARACTERE DU TIR                               \n");
        printf("____________________________________________\n");
        printf("\n" );
        printf("CARACTERE :\t" );
        mark=getchar();
        getchar();
        printf("\n\n" );
        printf("____________________________________________\n");
        printf("CHOIX DU CARACTERE DU BOAT                            \n");
        printf("____________________________________________\n");
        printf("\n" );
        printf("CARACTERE :\t" );
        boat=getchar();
        getchar();


        do {
                system("clear");
                printf("\n");
                putIntTab(tab);
                printf("\n\n" );
                printf("DERNIER TIR : %c%c\n",i,j);
                printf("__________________________________________\n");
                printf("-                 MENU                   -\n");
                printf("__________________________________________\n");
                printf("\n" );
                printf("0.CHOIX DU CARACTERE DE LA GRILLE\n");
                printf("1.CHOIX DU CARACTERE DU TIR      \n");
                printf("2.CHOIX DU CARACTERE DU BOAT      \n");
                printf("3.AUTO DEFFILEMENT  \n");
                printf("4.POSITION TIR  \n");
                printf("5.POSITION BOAT  \n");
                printf("8.TEST CASE \n");
                printf("9. Quitter.\n");
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
                        printf("POSITION TIR puis retour au menu\n");
                        printf("____________________________________________\n");
                        printf("\n" );
                        printf("POSITION:\t" );
                        i=getchar();
                        j=getchar();
                        getchar();
                        AddObject(tab,  i, j,mark,boat);
                        menu_option='m';
                        printf("\n" );
                        break;
                case '5':
                        system("clear");
                        printf("\n" );
                        putIntTab(tab);
                        printf("\n" );
                        printf("\n" );
                        printf("____________________________________________\n");
                        printf("POSITION BOAT puis retour au menu\n");
                        printf("____________________________________________\n");
                        printf("\n" );
                        printf("POSITION:\t" );
                        i=getchar();
                        j=getchar();
                        getchar();
                        printf("LONGEUR:\t" );
                        lng=getchar()-'0';
                        getchar();
                        printf("DIPOSITON horizontal(h)/vertical(v):\t" );
                        disp=getchar();
                        getchar();
                        AddBoat(tab,  i, j,boat,lng,disp);
                        menu_option='m';
                        printf("\n" );
                        /*test pos*/
                        for (int i = 0; i < t_tab; i++) {
                                for(int j= 0; j < t_tab; j++) {

                                }
                        }
                        break;
                case '1':
                        system("clear");
                        printf("\n" );
                        printf("____________________________________________\n");
                        printf("CHOIX DU CARACTERE DU TIR + RENITIALISATION\n        puis retour au menu\n");
                        printf("____________________________________________\n");
                        printf("\n" );
                        printf("CARACTERE :\t" );
                        mark=getchar();
                        getchar();
                        FillTab(tab,choice);
                        break;
                case '0':
                        system("clear");
                        printf("\n" );
                        printf("_________________________________________________\n");
                        printf("CHOIX DU CARACTERE DE LA GRILLE + RENITIALISATION\n        puis retour au menu\n");
                        printf("_________________________________________________\n");
                        printf("\n" );
                        printf("CARACTERE :\t" );
                        menu_option=getchar();
                        getchar();
                        choice=menu_option;
                        FillTab(tab,choice);
                        menu_option='m';
                        break;
                case '2':
                        system("clear");
                        printf("\n" );
                        printf("____________________________________________\n");
                        printf("CHOIX DU CARACTERE DU BOAT + RENITIALISATION\n        puis retour au menu\n");
                        printf("____________________________________________\n");
                        printf("\n" );
                        printf("CARACTERE :\t" );
                        boat=getchar();
                        getchar();
                        FillTab(tab,choice);
                        break;
                case '8':
                        system("clear");
                        printf("\n" );
                        putIntTab(tab);
                        printf("\n" );
                        printf("\n" );
                        printf("____________________________________________\n");
                        printf("POSITION TEST\n");
                        printf("____________________________________________\n");
                        printf("\n" );
                        printf("POSITION:\t" );
                        i=getchar();
                        j=getchar();
                        getchar();
                        if(i<j) {
                                test=i;
                                i=j;
                                j=test;
                        }
                        test=tab[j-'0'+1] [i-'a'+1];
                        printf("\n\n" );
                        printf("%c\n",test);
                        sleep(3);
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
                                menu_option='9';
                        }
                        printf("\n" );
                        system("clear");
                        printf("\n" );
                        getchar();
                        break;

                case '9':
                        printf("BYE BYE !!!\n");
                        sleep(1);
                        system("clear");/* condition */
                        break;
                default:
                        printf("Mauvaise entrer !!!\n");
                        sleep(1);
                        system("clear");
                        break;

                }
        }
        while(menu_option !='9');
}
