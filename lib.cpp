#include <iostream>
#include "lib.h"
#include <string.h>
using namespace std;

bool array(char list[10][20],char name[20],int &i){
for(i=0;i<10;i++){
    if((strcmp(list[i],name))==0){
        return true;
    }
}
    return false;
}
