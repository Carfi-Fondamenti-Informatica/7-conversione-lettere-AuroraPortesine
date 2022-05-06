#include "lib.h"

bool conversione (char &s){
    if(s >= 65 && s <= 90){
        s = s + 32;
        return true;
    }else if(s >= 97 && s <= 122){
        s = s - 32;
        return true;
    }else{
        return false;
    }
}
