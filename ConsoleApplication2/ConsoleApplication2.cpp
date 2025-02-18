#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Vehiculo
{
private:
	string marca;
	string modelo;
	double precio;
public:
	Vehiculo(string marca, string modelo, double precio) {
		this->marca = marca;
		this->modelo = modelo;
		this->precio = precio;
	}
	void mostrarinfo() {
		cout << " Marca: " << marca;
		cout << " Modelo: " << modelo;
		cout << " Precio: " << precio;
	}
	void getMarca(string marca) {
		this->marca = marca;
	}
	void getModelo(string modelo) {
		this->modelo = modelo;
	}
	void getPrecio(double precio) {
		this->precio = precio;
	}
};
class Automovil : public Vehiculo {
private:
	int puertas;
public:
	Automovil(string marca, string modelo, double precio, int puertas) : Vehiculo(marca, modelo, precio) {
		this->puertas = puertas;
	}
	void mostrarinfo1() {
		Vehiculo::mostrarinfo();
		cout << " Puertas: " << puertas << endl;
	}
	void getPuertas(int puertas) {
		this->puertas = puertas;
	}
};
class Motocicleta : public Vehiculo {
private:
	int cilindraje;
public:
	Motocicleta(string marca, string modelo, double precio, int cilindraje) : Vehiculo(marca, modelo, precio) {
		this->cilindraje = cilindraje;
	}
	void mostrarinfo2() {
		Vehiculo::mostrarinfo();
		cout << " Cilindraje: " << cilindraje<<" cc" << endl;
	};
};
class Camioneta : public Vehiculo
{
private:
	string capacidadCarga;

public:
	Camioneta(string marca, string modelo, double precio, string capacidadCarga) : Vehiculo(marca, modelo, precio) {
		this->capacidadCarga = capacidadCarga;
	}
	void mostrarinfo3() {
		Vehiculo::mostrarinfo();
		cout << "Capacidad de carga: " << capacidadCarga << endl;
	};
};
class Cliente
{
private:
	string nombre;
	int edad;
public:
	Cliente(string nombre, int edad) {
		this->nombre = nombre;
		this->edad = edad;
	}
	void mostrarinfo() {
		cout << "Nombre: " << nombre;
		cout << " Edad: " << edad;
	}



};
int main()
{
	vector<Cliente*> clientes;
	clientes.push_back(new Cliente("Juan", 20));
	for (int i = 0; i < clientes.size(); i++) {
		clientes[i]->mostrarinfo();
	}
	vector<Automovil*> vehiculos;
	vehiculos.push_back(new Automovil("Toyota", "Corolla", 20000, 4));
	for (int i = 0; i < vehiculos.size(); i++) {
		vehiculos[i]->mostrarinfo1();
	}
	vector<Cliente*> clientes1;
	clientes1.push_back(new Cliente("Pedro", 30));
	for (int i = 0; i < clientes.size(); i++) {
		clientes1[i]->mostrarinfo();
	}
	vector<Motocicleta*> vehiculos1;
	vehiculos1.push_back(new Motocicleta("Honda", "CBR", 10000, 250));
	for (int i = 0; i < vehiculos1.size(); i++) {
		vehiculos1[i]->mostrarinfo2();
	}
	vector<Cliente*> clientes2;
	clientes2.push_back(new Cliente("Maria", 25));
	for (int i = 0; i < clientes.size(); i++) {
		clientes2[i]->mostrarinfo();
	}
	vector<Camioneta*> vehiculos2;
	vehiculos2.push_back(new Camioneta("Toyota", "Hilux", 30000, "1000 kg"));
	for (int i = 0; i < vehiculos2.size(); i++) {
		vehiculos2[i]->mostrarinfo3();
	}
	return 0;
}