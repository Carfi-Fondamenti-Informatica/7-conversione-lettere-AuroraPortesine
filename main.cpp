#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char s;
    cin >> s;
    if(conversione(s)){
        cout<<s;
    }else{
        cout<<"errore";
    }
    return 0;
}
