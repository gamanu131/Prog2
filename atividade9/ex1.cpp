#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int *p, a;
    char d;
    
    p=&a;
    cin >> a;
    cout << "Decrementar(-) ou Incrementar(+)?" << endl;
    cin >> d;
    switch(d){
        case '-':
            (*p)--;
            break;
        case '+':
            (*p)++;
            break;
        default:
            break;
    }
    cout << a << endl;
    
}