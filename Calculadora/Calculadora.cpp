#include <iostream>

using namespace std;

int main()
{
    float Dato1 = 0;
    float Dato2 = 0;
    float VSuma = 0;
    float VResta = 0;
    float VDivide = 0;
    float VMultiplica = 0;


    cout << "Introduce el dato 1: ";
    cin >> Dato1;
    cout << "Introduce el dato 2: ";
    cin >> Dato2;


    VMultiplica = Dato1 * Dato2;
    VResta = Dato1 - Dato2;
    VSuma = Dato1 + Dato2;
    VDivide = Dato1 / Dato2;
    cout << endl << "Los resultados son: " << endl;
    cout << "Suma: "<< VSuma << endl;
    cout << "Resta: "<< VResta << endl;
    cout << "Multiplicacion: " << VMultiplica << endl;
    cout << "Division: " << VDivide << endl;

    return 0;
}
