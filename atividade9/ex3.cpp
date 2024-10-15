#include <iostream>
#include <iomanip>
#include <cmath>
#define K 665
using namespace std;

int main(){
    int *p, a;
    p=&a;
    cin >> *p;
    (*p)-=K;
    cout << a << endl;
}