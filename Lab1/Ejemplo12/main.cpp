#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct persona{
	char nombre[30];
	int edad;
	long telefono;
};
void escribir(persona p){
	cout << p.nombre << " tiene " << p.edad << " años y su telefono " << p.telefono;
	cout << endl;
}
void escribirPuntero(persona* p){
	cout << p->nombre << " tiene " << p->edad << " años y su telefono es " << p->telefono;
	cout << endl;
}
persona crearPersona(char n[30], int e, long t){
	persona aux;
	strcpy(aux.nombre, n);
	aux.edad = e;
	aux.telefono = t;
	return aux;
}

int main(int argc, char **argv)
{
	persona ejemplo;
	ejemplo = crearPersona((char*)"Jesus", 99, 4261426145);
	cout << "Paso por valor" << endl;
	escribir(ejemplo);
	ejemplo = crearPersona((char*)"Mario", 34, 9827261351);
	cout << "Paso con puntero" << endl;
	escribirPuntero(&ejemplo);
	return 0;
}
