#include <iostream>
using namespace std;

int BMM1(int a, int b)
{
    int c;
    while(b!=0){
        c = a;
        a = b;
        b = c % a;
    }
    return a;
}

int BMM2(int a , int b){
    
}