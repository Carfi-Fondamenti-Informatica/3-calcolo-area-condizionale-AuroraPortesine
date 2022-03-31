#include <iostream>
using namespace std;

int main() {
    float a=0, b=0;
    int opzione=0;
    cin >> opzione;
    switch(opzione){
        case 0:
            cin >> a >> b;
            cout << (a*b)/2 << endl;
            break;
        case 1:
            cin >> a;
            cout << a*a << endl;
            break;
        case 2:
            cin >> a >> b;
            cout << a*b << endl;
            break;
        default:
            cout<<"opzione non valida\n";
    }
    return 0;
}
