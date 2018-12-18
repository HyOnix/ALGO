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
        int menu_option='0',lng,count;
        char choice= '.',test;
        char mark='o',boat='H',disp;
        char i='N',j='A';
        int cuir=1,croi=2,torp=3,sous=4;
        FillTab(tab,choice);
        AddObject(tab,'e','5',mark,boat);
        AddBoat(tab,'b','2',boat,3,'l');
        AddBoat(tab,'h','3',boat,2,'h');
        AddBoat(tab,'e','4',boat,4,'l');
        AddObject(tab,'b','3',mark,boat);
        AddObject(tab,'h','0',mark,boat);
        printf("-                                        -\n");
        printf("      PROJET ALGO : BATAILLE NAVALE !!! \n");
        printf("-Crée par : L'ALGO C RIGOLO et moi  \n");
        printf("------------------------------------------\n");
        printf("\n\n");
        putIntTab(tab);
        printf("\n\n" );
        printf("____________________________________________\n");
        printf("MODE\n");
        printf("____________________________________________\n");
        printf("0.AUTO\n");
        printf("1.MODE CONFIG\n");
        printf("--------------------------------------------\nChoix :\t ");
        menu_option=getchar();
        getchar();
        switch (menu_option) {
        case '1':
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
                break;
        case '0':
                FillTab(tab,choice);
                break;
        default:
                printf("Mauvaise entrer !!!\n");
                sleep(1);
                system("clear");
                break;
        }


        do {
                system("clear");
                printf("\n");
                putIntTab(tab);
                printf("\n\n" );
                printf("DERNIERE ACTION : %c%c\n",i,j);
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
                printf("s.STRATEGIE/PLACEMENT  \n");
                printf("8.TEST CASE \n");
                printf("9. Quitter.\n");
                printf("Choisissez une option:\n");
                printf("------------------------------------------\n");
                menu_option = getchar();
                getchar();
                printf("\n" );
                system("clear");
                switch(menu_option) {
                case 's':
                        count=10;
                        FillTab(tab,choice);
                        do {
                                printf("\n" );
                                system("clear");
                                printf("\n" );
                                putIntTab(tab);
                                printf("\n" );
                                printf("\n" );
                                printf("Arsenal : %i\n",count);
                                printf("____________________________________________\n");
                                printf("SELECT YOUR BOAT\n");
                                printf("c.CUIRASSE %i\n",cuir );
                                printf("r.CROISEURS %i\n",croi );
                                printf("t.TORPILLEURS %i\n",torp );
                                printf("s.SOUS-MARIN %i\n",sous);
                                printf("_____________________ _______________________\n");
                                printf("\nChoix:\t" );
                                menu_option=getchar();
                                getchar();

                                system("clear");
                                printf("\n" );
                                putIntTab(tab);
                                printf("\n" );
                                printf("\n" );
                                printf("____________________________________________\n");
                                printf("STRATEGIE\n");
                                printf("____________________________________________\n");
                                printf("\n" );
                                printf("POSITION:\t" );
                                i=getchar();
                                j=getchar();
                                getchar();
                                if(menu_option!='s') {
                                        printf("DIPOSITON horizontal(h)/vertical(v):\t" );
                                        disp=getchar();
                                        getchar();
                                }

                                switch (menu_option) {
                                case 'c':
                                        AddBoat(tab,i,j,boat,4,disp);
                                        cuir--;
                                        break;
                                case 'r':
                                        AddBoat(tab,i,j,boat,3,disp);
                                        croi--;
                                        break;
                                case 't':
                                        AddBoat(tab,i,j,boat,2,disp);
                                        torp--;
                                        break;
                                case 's':
                                        AddBoat(tab,i,j,boat,1,disp);
                                        sous--;
                                        break;


                                }
                                count=cuir+croi+sous+torp;
                                printf("\n" );
                        } while (count>0);

                        break;
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
