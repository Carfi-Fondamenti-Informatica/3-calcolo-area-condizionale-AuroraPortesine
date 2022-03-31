#include <iostream>
using namespace std;

int main() {
    float a=0, b=0;
    int opzione=0;
    cout << "Scegliere l'opzione desiderata\n";
    cin >> opzione;
    switch(opzione){
        case 0:
            cout << "Inserire il valore della base e dell'altezza\n";
            cin >> a >> b;
            cout<< (a*b)/2 << endl;
            break;
        case 1:
            cout << "Inserire il valore del lato\n";
            cin >> a;
            cout<< a*a << endl;
            break;
        case 2:
            cout << "Inserire rispettivamente il valore del primo e del secondo lato\n";
            cin >> a >> b;
            cout<< a*b << endl;
            break;
        default:
            cout<<"opzione non valida\n";
    }
    return 0;
}
