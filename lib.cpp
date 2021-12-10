#include <iostream>
#include "lib.h"
using namespace std;

//char v=65,m=90,l=97,h=122;

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
        for(int j=0;j<20;j++){
            if ((a[i][j]>=65&&a[i][j]<=90)||(97<=a[i][j]&&a[i][j]<=122)) {
                if (97 <= a[i][j] && a[i][j] <= 122) {
                    a[i][j] - 32;
                } else {
                    a[i][j] = ' ';
                }
            }
        }
    }
    for(int r=0;r<1;r++){
        cin>>b[r];
        for(int f=0;f<20;f++) {
            if ((65 <= b[r][f] && b[r][f] <= 90) || (97 <= b[r][f] && b[r][f] <= 122)) {
                if (97 <= b[r][f] && b[r][f] <= 122) {
                    b[r][f] - 32;
                } else {
                    r = ' ';
                }
            }
        }

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
