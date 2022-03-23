//Hacer un programa que simule un cajero automático con un saldo inicial de 100 Dólares.
//Tres opciones. Ingresar, retirar y salir.
#include <iostream>
using namespace std;

int main () {
    int saldo_inicial= 1000, opc;
    float extra, saldo =0, retiro;
    
    cout << "\tBienvenido al cajero automatico" << endl;
    cout << "1. Ingresar dinero" << endl;
    cout << "2. Retirar dinero" << endl;
    cout << "3. Salir" << endl;
    cout << "\nOpcion: ";
    cin >> opc;
    
    switch (opc) {
        case 1:
            cout << "Cantidad a ingresar: ";
            cin >> extra;
            saldo = saldo_inicial + extra;
            break;
        case 2:
            cout << "Cantidad a retirar: ";
            cin >> retiro;
            if (retiro > saldo_inicial){
                cout << "No dispone de esa cantidad\n" << endl;
                return main();
            } else {
                saldo = saldo_inicial - retiro;
                cout << "Dinero en cuenta: " << saldo << endl;
            }
        case 3:
            return 0;
        default:
            cout << "\tSeleccione una opcion valida" "\n" << endl;;
            main();
    }
    cout << "Dinero en cuenta: " << saldo << endl;
    return 0;
}
