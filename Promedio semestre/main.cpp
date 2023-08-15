/*
    Programa: Bucles - Semana #3
    ID Autor: T00070257
    Nombre Autor: Álvaro José Álvarez Puello
    Fecha: 15-08-23
*/

#include <iostream>

using namespace std;

//  Función
double cPromedio(int tCreditos, float tcMaterias) {
    double resultado = tcMaterias / tCreditos;
     
    return resultado;
}

int main() {
    char x = 's';
//    ¿Continuar?
    do {
        int materias, creditos, tCreditos;
        float cMaterias, tCMaterias;
        
        cin >> materias;
        
        for (int i = 1; i <= materias; i++) {
            cin >> creditos;
            
            cin >> cMaterias;
        }
        
        
        cout << "!Perfecto! ¿Te gustaría volver a utilizar el programa? (S/N): ";
        cin >> x;
    } while (x == 's' || x == 'S');
    
    return 0;
}
