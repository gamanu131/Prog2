#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int v[5]={3, 4, 2, 5, 9}, *p;
    p=&v[0];
    for(int i=0; i<5; i++){
        cout << *(p+i) << endl;
    }
}