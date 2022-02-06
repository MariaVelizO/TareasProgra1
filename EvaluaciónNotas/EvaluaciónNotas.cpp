#include <iostream>

using namespace std;

int main()
{
    int PrograI= 0;
    int Derechoinforma= 0;
    int FisI= 0;
    int ProcesoAd= 0;
    int CalI= 0;

    cout << "Ingrese la nota de Programacion I"<< endl;
    cin >> PrograI;
    cout << "Ingrese la nota de Derecho Informatico" << endl;
    cin >> Derechoinforma;
        cout << "Ingrese la nota de Fisica I"<< endl;
    cin >> FisI;
    cout << "Ingrese la nota de Proceso Administrativo" << endl;
    cin >> ProcesoAd;
        cout << "Ingrese la nota de Calculo I"<< endl;
    cin >> CalI;

    if(PrograI >= 61)
    {
        cout << "Programacion I: el alumno esta aprobado"<< endl;
    }else if(PrograI < 61 && PrograI >= 26)
    {
        cout << "Programacion I: el alumno esta reprobado" << endl;
    }else
    {
        cout << "Programacion I: No tiene zona minima" << endl;
    }

    if(Derechoinforma >= 61)
    {
        cout << "Derecho Informatico: el alumno esta aprobado"<< endl;
    }else if(Derechoinforma < 61 && Derechoinforma >= 26)
    {
        cout << "Derecho Informatico: el alumno esta reprobado" << endl;
    }else
    {
        cout << "Derecho Informatico: No tiene zona minima" << endl;
    }

    if( FisI>= 61)
    {
        cout << "Fisica I: el alumno esta aprobado"<< endl;
    }else if(FisI < 61 && FisI >= 26)
    {
        cout << "Fisica I: el alumno esta reprobado" << endl;
    }else
    {
        cout << "Fisica I: No tiene zona minima" << endl;
    }

    if(ProcesoAd>= 61)
    {
        cout << "Proceso Administrativo: el alumno esta aprobado"<< endl;
    }else if(ProcesoAd < 61 && ProcesoAd >= 26)
    {
        cout << "Proceso Administrativo: el alumno esta reprobado" << endl;
    }else
    {
        cout << "Proceso Administrativo: No tiene zona minima" << endl;
    }


    switch(CalI)
    {
        case 61:
            cout << "Calculo I: el alumno esta aprobado"<< endl;
            break;
        case 60:
            cout << "Calculo I: el alumno esta reprobado"<< endl;
            break;
        case 25:
            cout << "Calculo I: No tiene zona minima"<< endl;
            break;
        default:
            cout << "Calculo I: Este valor no esta incluido en las tres opciones" << endl;
            break;

    }



    return 0;
}
