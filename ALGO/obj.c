#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "obj.h"




void FillTab(int tab[t_tab][t_tab],char inc){

        for (int i = 0; i < t_tab; i++) {
                for(int j= 0; j < t_tab; j++) {
                        if (i==0 || j==0 ) {
                                if (i+j==0) {
                                        tab[i][j]='/';
                                }
                                else{
                                        if (i!=0) {
                                                tab[i][j]=i-1+'0';
                                        }
                                        if (j!=0) {
                                                tab[i][j]=j-1+'A';
                                        }

                                }
                        }
                        else{
                                tab[i][j]=inc;
                        }
                }
        }

}



void putInt( int input ){
        if(0 == input) {
                putchar('0');
        }
        else{
                foo(input);
        }
}

void foo( int input){
        int reste;
        if(0 > input) {
                putchar('-');
                foo(-1*input);
        }
        if(0 < input) {
                reste = input % t_tab;
                foo((input-reste)/t_tab);
                putchar('0'+reste);
        }
}

void putIntTab( int tab[t_tab][t_tab]){

        for(int i=0; i < t_tab; i++) {
                putchar('\n');
                for (int y = 0; y < t_tab; y++) {
                        putchar( tab[i][y]);
                        putchar(' ');
                }
        }
}
int cst;
void AddObject( int tab[t_tab][t_tab], char i, char j,char mark){

        if(i<j) {
                cst=i;
                i=j;
                j=cst;
        }

        if(i>='A' && i<='J') {
                tab[j-'0'+1][i-'A'+1]=mark;
        }
        if(i>='a' && i<='j') {
                tab[j-'0'+1][i-'a'+1]=mark;
        }

}
