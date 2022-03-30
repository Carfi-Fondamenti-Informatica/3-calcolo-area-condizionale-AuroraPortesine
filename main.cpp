#include <iostream>
using namespace std;

int main() {
    float a, b;
    int opzione, Area;
    cin >> opzione;
    switch(opzione){
        case 0:
            cin >> a >> b;
            cout<< (Area=(a*b)/2);
            break;
        case 1:
            cin >> a;
            cout<< (Area=a*a);
            break;
        case 2:
            cin >> a >> b;
            cout<< (Area=a*b);
            break;
        default:
            cout<<"Opzione non valida\n";
    }
    return 0;
}
