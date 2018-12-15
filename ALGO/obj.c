#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "obj.h"




void FillTab(int tab[t_tab][t_tab],int inc){

        for (int i = 0; i < t_tab; i++) {
                for(int j= 0; j < t_tab; j++) {
                        tab[i][j]=inc;
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
                reste = input % 10;
                foo((input-reste)/10);
                putchar('0'+reste);
        }
}

void putIntTab( int tab[10][10]){
        int index;
        for( index=0; index < 100; index++) {
                if (index % 10 == 0) {
                        putchar('\n');
                }
                putInt( tab[ index % 10 ][( index - index % 10)/10]);
                putchar(' ');
        }
}
