#include <iostream>
#include "lib.h"
using namespace std;

int array(char a[10][20],char b[1][20]){
    for (int x=0;x<20;x++){
        for(int c=0;c<10;c++){
            a[c][x]=' ';
        }
    }
    for (int x=0;x<20;x++){
            b[0][x]=' ';
    }
    for (int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int r=0;r<1;r++){
        cin>>b[r];
    }
    int z=0;
    for(int e=0;e<10;e++) {
        if(b[0][0]==a[e][0]) {
            for(int w=0;w<20;w++){
                if(b[0][w]==a[e][w]){
                    z++;
                    if(z==19){
                        return e;
                    }
                }
            }
        }
    }
    return 30;
}
