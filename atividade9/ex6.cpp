#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int estatica(int x){
    a++;
    return a;
}

int main(){
    static int x;
    cin >> x;
    cout << estatica(x) << endl;
    cout << estatica(x) << endl;
    cout << estatica(x) << endl;
    cout << estatica(x) << endl;
    cout << estatica(x) << endl;
    cout << estatica(x) << endl;

}