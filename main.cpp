#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char nomi [10][20];
    char nome [1][20];
    int d=array(nomi,nome);
    if(d!=30){
        cout<<d<<endl;
    }else{
        cout<< "non presente"<<endl;
    }
    return 0;
}
