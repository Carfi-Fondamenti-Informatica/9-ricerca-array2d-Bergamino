#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char list [10][20];
    char name[20];
    int a=0;
    for(int i=0;i<10;i++){
        cin>>list[i];
    }
    cin>>name;
    if(res(list,name,a)){
        cout <<a;
    }else{
        cout<<"non presente";
    }
    return 0;
}
