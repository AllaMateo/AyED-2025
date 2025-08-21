#include <iostream>
#include <string.h>
#include "sensor.h"

using namespace std;

int main() {
    /*
    // Memoria Estatica
    Sensor sCocina;
    sCocina.nombre = "TempCocina";
    sCocina.valor = 28.3;
    sCocina.unidad = "°C";
    
    // Memoria Dinamica
    Sensor * sHabitacion = new Sensor; 
    sHabitacion -> nombre = "TempHabitacion";
    sHabitacion -> valor = 30.5;
    sHabitacion -> unidad = "°C";
    */
    
    
    int N;
    cout << "Cantidad de sensores: ";
    cin >> N;

    //TODO: Instanciar un array de Sensores de forma dinamica y de tamaño N
    
    Sensor* sensores = new Sensor[N];
    
    string archivoEntrada;
    cout << "Archivo de entrada: ..datos.txt";
    //cin >> archivoEntrada;
    archivoEntrada = "..datos.txt"; cout << endl;
    
    int leidos = cargarDesdeArchivo(archivoEntrada, sensores, N);
    cout << "Se leyeron " << leidos << " sensores.\n";

    imprimir(sensores, leidos);

    // TODO: Que habria que hacer aca??
    return 0;
}
