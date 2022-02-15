#include <iostream>
using namespace std;

int obtenerSuma (int num1 , int num2)
{
return num1 + num2;
}
int obtenerResta (int num1 , int num2)
{
return num1 - num2;
}
int obtenerMultiplicacion (int num1 , int num2)
{
return num1 * num2;
}
int obtenerDivision (int num1 , int num2)
{
return num1 / num2;
}
int main()
{

    int Valor1 = 0;
    cout << "Ingrese Valor 1" << endl;
     cin  >>  Valor1;
    int Valor2 = 0;
    cout << "Ingrese Valor 2" << endl;
    cin  >>  Valor2;
    cout << "El resultado de la suma es: " << endl;
    int suma = obtenerSuma (Valor1, Valor2);
    cout << suma << endl;
    cout << "El resultado de la resta es: " << endl;
    int resta = obtenerResta (Valor1, Valor2);
    cout << resta << endl;
     cout << "El resultado de la multiplicacion es: " << endl;
    int Multi = obtenerMultiplicacion (Valor1, Valor2);
    cout << Multi << endl;
    cout << "El resultado de la division es: " << endl;
    int divide = obtenerDivision (Valor1, Valor2);
    cout << divide << endl;


    return 0;
}
