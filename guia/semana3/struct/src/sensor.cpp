#include "sensor.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void imprimir(const Sensor* lista, int n) {
	/*for(int i=0; i < n ;i++){
		int x;
		(i > 9)? x=19:x=20;
		cout << "Sensor " << i+1 << " :"
		<< setw(x) << lista[i].nombre << ", " << setw(10) << lista[i].valor << ", " << setw(10) << lista[i].unidad << endl;
	}*/	
}

int cargarDesdeArchivo(const string& ruta, Sensor* lista, int n) {
	ifstream  arch (ruta);
	if(!arch) return 0;
	
	int count = 0;
	while (count < n && (arch >> lista[count].nombre >> lista[count].valor >> lista[count].unidad)) 
		count ++;
	return count;
}

/*
//Pruebas
void cArchivo(const string& ruta) { 
	ifstream  arch (ruta);
	string l;
	while (getline (arch, l))
	cout << l << endl; 
}*/

