#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int *a, *b, x, y;
    a=&x;
    b=&y;
    cin >> *a >> *b;
    
    if(x>y){
        cout << "o primeiro é maior" << endl;
    }else if(y>x){
        cout << "o segundo é maior" << endl;
    }else{
        cout << "os dois são iguais" << endl;
    }

}