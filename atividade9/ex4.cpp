#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int *a, *b, x, y;

    a=&x;
    b=&y;

    cin >> *a >> *b;

    x-=y;
     cout << x;

}