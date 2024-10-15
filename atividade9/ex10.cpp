#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int *a, *b, x, y;
    b=&y;
    a=&x;

    if(a>b){
        cout << "a eh maior" << endl;
    }else{
        cout << "b eh maior" << endl;
    }
}